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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x812d650, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0xbaa7fd2b, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0xc956690, __VMLINUX_SYMBOL_STR(usb_stor_control_msg) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xa7020089, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf3c45a4, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3371a518, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x20ae8bd0, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xa1f86d5e, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x49c5e82d, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0xfd7a792b, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xea3a9ea4, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x711f0e1d, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07ABpFC01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "09279F3EB1783E8A3C34ECE");
