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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x1d83c3a8, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2e69469c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x30d44897, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0x1a79a756, __VMLINUX_SYMBOL_STR(nf_conntrack_eventmask_report) },
	{ 0x8df505eb, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0xe95d1f14, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xdcd039ae, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xef420b53, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x84915342, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xc126be22, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x828aec16, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4b4b24db, __VMLINUX_SYMBOL_STR(nf_conntrack_lock) },
	{ 0x28eff409, __VMLINUX_SYMBOL_STR(nf_conntrack_hash) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x8ffe7e89, __VMLINUX_SYMBOL_STR(nf_conntrack_htable_size) },
	{ 0x7fa87c51, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc2386018, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x9028041f, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7bcdc314, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xbc324a1e, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0xaa37260e, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x38fa62ec, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0x6dc5d8e9, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x85825898, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x1d73bc46, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf49d3986, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xb71b3650, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1692bb40, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x19e732e6, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x999d8af9, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xec8beba6, __VMLINUX_SYMBOL_STR(nf_ct_expect_hash) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x26b6f952, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x3419ee25, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x22e933d6, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x8c6bf01b, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x909292e7, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x52484fcd, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x25d05c1f, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x5ef6779f, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x151e8a61, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf8281bed, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0xa0d8e150, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0xd4d45a7, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "867BE847AF3301923729F5A");
