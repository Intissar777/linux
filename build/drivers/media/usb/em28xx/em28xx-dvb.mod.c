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
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x14e44816, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xee728beb, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x6c8a13f0, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x6770c12f, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x15963025, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xa4656913, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0xdabfef88, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe68cd4c4, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x5962a4cd, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0x7c0c003a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2eb03c8b, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xecfd7ab, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xeeee5caf, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe4efe46b, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x684e52a3, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xf8ef7243, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x6914b728, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x9a11b62d, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x7e7a2e92, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x6fc29b59, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xe95c0394, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xafc0a13e, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x7cfbe791, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xf00e875b, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x3a981c24, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x8e0451f3, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6d9eadf, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x94a477ba, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3f008e76, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xf60cd705, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf473ffaf, __VMLINUX_SYMBOL_STR(down) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x5b993561, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x552dca7, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x825fd87b, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,dvb-core";


MODULE_INFO(srcversion, "BAD924EC5FE516DAE9E8C88");
