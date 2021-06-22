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
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x13c6bb2c, __VMLINUX_SYMBOL_STR(usb_stor_set_xfer_buf) },
	{ 0x812d650, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_buf) },
	{ 0x5c8e5872, __VMLINUX_SYMBOL_STR(usb_stor_access_xfer_buf) },
	{ 0xbaa7fd2b, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x7395f7aa, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa7020089, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf3c45a4, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x7eb77bdd, __VMLINUX_SYMBOL_STR(fill_inquiry_response) },
	{ 0x3371a518, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0x20ae8bd0, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xa1f86d5e, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x7c68dd19, __VMLINUX_SYMBOL_STR(usb_stor_ctrl_transfer) },
	{ 0x49c5e82d, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x90b9a1ef, __VMLINUX_SYMBOL_STR(usb_stor_CB_reset) },
	{ 0xfd7a792b, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xea3a9ea4, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3929aa7e, __VMLINUX_SYMBOL_STR(usb_stor_CB_transport) },
	{ 0x9495bc60, __VMLINUX_SYMBOL_STR(usb_stor_bulk_transfer_sg) },
	{ 0x711f0e1d, __VMLINUX_SYMBOL_STR(usb_stor_bulk_srb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0436p0005d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d020[0-8]dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p0005d01*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp0105d0100dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0781p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AFp0006d0100dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9F83DB1F92668499B4A838F");
