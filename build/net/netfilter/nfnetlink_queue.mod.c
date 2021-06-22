#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x27db7dc5, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x1d83c3a8, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x2e69469c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x7360cd95, __VMLINUX_SYMBOL_STR(nf_queue_entry_get_refs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x58457f66, __VMLINUX_SYMBOL_STR(nf_queue_entry_release_refs) },
	{ 0x157c3b3b, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xbac3cbf2, __VMLINUX_SYMBOL_STR(ns_to_timespec64) },
	{ 0x4cdaf562, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0x65f211d4, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xc8aa8d5b, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xfa5161b2, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6fe6a3f0, __VMLINUX_SYMBOL_STR(from_kgid_munged) },
	{ 0xc853222d, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0x3dfb2b65, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x4a369bfa, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x151e8a61, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x355325be, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xfc2f9ecc, __VMLINUX_SYMBOL_STR(nf_register_queue_handler) },
	{ 0x96da6ed9, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa76f1e79, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x63f45fb3, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x86f69c8d, __VMLINUX_SYMBOL_STR(nf_unregister_queue_handler) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4ee5d2e, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc846ad9d, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb00a09ec, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe95c0394, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x7c0c003a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x2dc89400, __VMLINUX_SYMBOL_STR(nfnl_ct_hook) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9c985a23, __VMLINUX_SYMBOL_STR(nf_reinject) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "81E5BE113533F078CC8FFF7");
