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
	{ 0x16606a9a, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0xd0a6fff9, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x8a63a3a7, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc29a9042, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xb5e43be5, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x2000d9aa, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xd437c286, __VMLINUX_SYMBOL_STR(flow_get_u32_src) },
	{ 0x468e2f64, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0xbb761d6b, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0x6091644e, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xad94cdc6, __VMLINUX_SYMBOL_STR(flow_get_u32_dst) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xaf60274, __VMLINUX_SYMBOL_STR(tcf_exts_change) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe01369f1, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0xbbc25d18, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0x3dfb2b65, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xec7a1cb, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0x28575dc, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0x3f5c6471, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x406402e1, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x5f14f8ac, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0x396d9c61, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "642CCACAE62E1B500A5D827");
