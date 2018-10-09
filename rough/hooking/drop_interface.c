//'Hello World' netfilter hooks example
//For any packet, we drop it, and log fact to /var/log/messages

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/netfilter_ipv4.h>
#include <linux/netfilter.h>
#define INT_MAX     ((int)(~0U>>1))
#define INT_MIN     (-INT_MAX - 1)

static int Init_fun(void);
static void Exit_fun(void);

struct nf_hook_ops nfho;         //struct holding set of hook function options

//function to be called by hook
unsigned int hook_func(unsigned int hooknum, struct sk_buff **skb,
			 const struct net_device *in, const struct net_device *out, 
				int (*okfn)(struct sk_buff *))
{


	int i = 0 ;

	if (skb != NULL) {
	printk("skb contains = %08x\n", skb);
	struct sk_buff *skbb = *skb;
	if (skbb->data != NULL)
	printk("data in skb is = %s\n", skbb->data);
	}
	else
	printk("skb is null\n");


	if ( skb && *skb ) 

	printk ("skb and *skb %d\n " , skb , *skb) ;

	else

	printk ("all are null") ;

	return NF_DROP ;
	
	printk ("strlen is %d i is %d " , strlen  (in -> name ) , i ) ;

//	printk ("the device name is %s\n" , in -> name) ;
//	else printk ("is null"); 

	printk ( "strcmp  returned value is %d\n" , strcmp (in -> name , in -> name)  ) ;

	if  ( !strcmp ( in -> name  , "lo") ) {
		
		//printk ("data in skbuf is : %s\n" , (*skb) -> data) ;
		
		printk("packet dropped\n");                                             //log to var/log/messages
  		
		return NF_DROP;      
		
	}
		
		else {

			printk("this packet isnt destined to interface");

		return NF_ACCEPT ;                                 
		
		}                           //drops the packet

}

//Called when module loaded using 'insmod'
static int Init_fun()
{
  nfho.hook = hook_func;                       //function to call when conditions below met
  nfho.hooknum = 0;            //called right after packet recieved, first hook in Netfilter
  nfho.pf = PF_INET;                           //IPV4 packets
  nfho.priority = NF_IP_PRI_FIRST;             //set to highest priority over all other hook functions
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
