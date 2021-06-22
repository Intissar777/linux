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
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xb39409f0, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x157c3b3b, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x959cd285, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x19d2d2bd, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0xca558906, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x38369483, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x5acfa265, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xed6c5615, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba8bb333, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x2bf476fc, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x1f20087d, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xccac5188, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0xa965264f, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0x6feada9b, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0xf9d984d8, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf211b6f6, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E5B56231E88C7611188F00C");
