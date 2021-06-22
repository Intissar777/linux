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
	{ 0xa37168aa, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf181dec0, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x9a5042c2, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa9379865, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xef2e7172, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x86d7d971, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xb3b2aeef, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x1ef58f69, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xa917d3dc, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc5ad742c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xc846ad9d, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
