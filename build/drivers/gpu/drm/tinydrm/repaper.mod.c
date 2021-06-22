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
	{ 0x480f307c, __VMLINUX_SYMBOL_STR(drm_gem_cma_vm_ops) },
	{ 0x37490319, __VMLINUX_SYMBOL_STR(drm_gem_dumb_destroy) },
	{ 0x79d49618, __VMLINUX_SYMBOL_STR(drm_gem_cma_dumb_map_offset) },
	{ 0xcdb9f37b, __VMLINUX_SYMBOL_STR(drm_gem_cma_dumb_create) },
	{ 0xdf4d40d4, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_mmap) },
	{ 0x6a561756, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_vunmap) },
	{ 0x64e5299c, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_vmap) },
	{ 0xe1535e0d, __VMLINUX_SYMBOL_STR(tinydrm_gem_cma_prime_import_sg_table) },
	{ 0x4620f7f7, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_get_sg_table) },
	{ 0xbb483857, __VMLINUX_SYMBOL_STR(drm_gem_prime_import) },
	{ 0xdc56f5c9, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x1977e977, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x51887ced, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x37924dd2, __VMLINUX_SYMBOL_STR(tinydrm_gem_cma_free_object) },
	{ 0xf6823bf5, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xcd244727, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xcaab8383, __VMLINUX_SYMBOL_STR(drm_gem_cma_mmap) },
	{ 0x5e7a1184, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xe0329b37, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xdb38325f, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x2639d553, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe73d9e95, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_prepare_fb) },
	{ 0xe1d34d8f, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_update) },
	{ 0xa7e4d204, __VMLINUX_SYMBOL_STR(drm_fb_cma_create_handle) },
	{ 0xd485e15d, __VMLINUX_SYMBOL_STR(drm_fb_cma_destroy) },
	{ 0xbc0d71c3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa3126341, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xdcd5774d, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf43e09fc, __VMLINUX_SYMBOL_STR(tinydrm_xrgb8888_to_gray8) },
	{ 0x1666d558, __VMLINUX_SYMBOL_STR(thermal_zone_get_temp) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3a26ed11, __VMLINUX_SYMBOL_STR(sched_clock) },
	{ 0xe97ea16a, __VMLINUX_SYMBOL_STR(thermal_zone_get_zone_by_name) },
	{ 0x93b8c982, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x2e1806a8, __VMLINUX_SYMBOL_STR(devm_tinydrm_register) },
	{ 0x90e40232, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xa54b0625, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_init) },
	{ 0xdb075287, __VMLINUX_SYMBOL_STR(devm_tinydrm_init) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x416afa59, __VMLINUX_SYMBOL_STR(device_property_read_string) },
	{ 0x4951ecaa, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9f4698e4, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x1a2190f, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x5f9712da, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x72e0ac3e, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xa5d86ee0, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd9362615, __VMLINUX_SYMBOL_STR(tinydrm_shutdown) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,drm_kms_helper";

MODULE_ALIAS("spi:e1144cs021");
MODULE_ALIAS("spi:e1190cs021");
MODULE_ALIAS("spi:e2200cs021");
MODULE_ALIAS("spi:e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1144cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e1190cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2200cs021C*");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021");
MODULE_ALIAS("of:N*T*Cpervasive,e2271cs021C*");

MODULE_INFO(srcversion, "F1507BF5A2AC8F64A9D22CF");
