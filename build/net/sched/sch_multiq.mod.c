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
	{ 0xc38d8b82, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x72b165f3, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xd4759776, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xffca19bc, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xb39409f0, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x3eccd051, __VMLINUX_SYMBOL_STR(tc_classify) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x5acfa265, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc828979, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x805d0dde, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0xc8e23db2, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2bf476fc, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x1f20087d, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf9d984d8, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "881E14B8C4F412595BCE241");
