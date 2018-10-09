
#include <linux/module.h>
#include <linux/kernel.h>
//#include <linux/skbuff.h>
//#include <linux/ip.h>                  /* For IP header */
//#include <linux/netfilter.h>
//#include <linux/netfilter_ipv4.h>

/* This is the structure we shall use to register our function */
static struct nf_hook_ops nfho;

/* IP address we want to drop packets from, in NB order */
static unsigned char *drop_ip = "\xff\xff\xff\xff";

/* This is the hook function itself */
unsigned int hook_func(unsigned int hooknum,
		struct sk_buff *skb,
		const struct net_device *in,
		const struct net_device *out,
		int (*okfn)(struct sk_buff *))
{
	struct sk_buff *sb = skb;

	if (sb->network_header.iph->saddr == drop_ip) {
		printk("Dropped packet from... %d.%d.%d.%d\n",
				*drop_ip, *(drop_ip + 1),
				*(drop_ip + 2), *(drop_ip + 3));
		return NF_DROP;
	} else {
		return NF_ACCEPT;
	}
}

/* Initialisation routine */
int init_module()
{
	/* Fill in our hook structure */
	nfho.hook     = hook_func;
	/* Handler function */
	nfho.hooknum  = NF_IP_PRE_ROUTING; /* First for IPv4 */
	nfho.pf       = PF_INET;
	nfho.priority = NF_IP_PRI_FIRST;   /* Make our func first */

	nf_register_hook(&nfho);

	return 0;
}

/* Cleanup routine */
void cleanup_module()
{
	nf_unregister_hook(&nfho);
}
