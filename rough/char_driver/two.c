//'Hello World' netfilter hooks example
//For any packet, we drop it, and log fact to /var/log/messages

#include <linux/kernel.h>
//#include <linux/module.h>
#include <linux/netfilter_ipv4.h>
#include <linux/netfilter.h>
#define INT_MAX     ((int)(~0U>>1))
#define INT_MIN     (-INT_MAX - 1)

static int Init_fun(void);
static void Exit_fun(void);

typedef unsigned int nf_hookfn(void *priv,
                   struct sk_buff *skb,
                   const struct nf_hook_state *state);

struct nf_hook_ops {
    struct list_head    list;

    /* User fills in from here down. */
    nf_hookfn       *hook;
    struct net_device   *dev;
    void            *priv;
    u_int8_t        pf;
    unsigned int        hooknum;
    /* Hooks are ordered in ascending priority. */
    int         priority;
};


struct nf_hook_ops nfho;         //struct holding set of hook function options

//function to be called by hook
unsigned int hook_func(unsigned int hooknum, struct sk_buff **skb, const struct net_device *in, const struct net_device *out, int (*okfn)(struct sk_buff *))
{
  printk(KERN_INFO "packet dropped\n");                                             //log to var/log/messages
  return NF_DROP;                                                                   //drops the packet
}

//Called when module loaded using 'insmod'
static int Init_fun()
{
  nfho.hook = hook_func;                       //function to call when conditions below met
  nfho.hooknum = 0;            //called right after packet recieved, first hook in Netfilter
  nfho.pf = PF_INET;                           //IPV4 packets
  nfho.priority = INT_MIN;             //set to highest priority over all other hook functions
  nf_register_hook(&nfho);                     //register hook

  return 0;                                    //return 0 for success
}

//Called when module unloaded using 'rmmod'
static void Exit_fun()
{
  nf_unregister_hook(&nfho);                     //cleanup – unregister hook
}


module_init(Init_fun);
module_exit(Exit_fun);
