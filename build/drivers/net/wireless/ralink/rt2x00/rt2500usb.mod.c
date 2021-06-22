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
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x57b6d6d9, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0xfe3885d6, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0x3e21028d, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xd743dfa, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x6b1a298b, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0xed2c6bc6, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x805b2f55, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x50162afa, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xacabfbcd, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x77a15d08, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x3df6f902, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xfeb4c6f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xfcb65c20, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x37d467a5, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0xdac4887, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x8a63bf92, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xd235fee4, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x88c7fb74, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xdb4fc5c2, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x104d0cd7, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0xcf0776c9, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x42eafd9, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x6557c014, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x9363916f, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x676442fd, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xda7649f5, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x28ae69d8, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x45fbcc33, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x52cdee58, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xef3bd973, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xc02c5bbe, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb24e5d0e, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5fbea82, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbb623b01, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x518615e5, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E9AC6BB9CE0D2E8FDD62219");
