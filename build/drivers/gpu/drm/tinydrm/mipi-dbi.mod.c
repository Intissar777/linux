#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x781ef7c8, __VMLINUX_SYMBOL_STR(tinydrm_swab16) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd485e15d, __VMLINUX_SYMBOL_STR(drm_fb_cma_destroy) },
	{ 0xf68fb2c4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x62dc2314, __VMLINUX_SYMBOL_STR(tinydrm_xrgb8888_to_rgb565) },
	{ 0x90e40232, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0x1a2190f, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xdb2c955b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xba376156, __VMLINUX_SYMBOL_STR(tinydrm_spi_max_transfer_size) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xdb075287, __VMLINUX_SYMBOL_STR(devm_tinydrm_init) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x97106714, __VMLINUX_SYMBOL_STR(memdup_user_nul) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xf021d2b6, __VMLINUX_SYMBOL_STR(tinydrm_spi_transfer) },
	{ 0xcf4b6577, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x494bdacb, __VMLINUX_SYMBOL_STR(drm_fb_cma_debugfs_show) },
	{ 0x96aeb484, __VMLINUX_SYMBOL_STR(tinydrm_disable_backlight) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfa5935b2, __VMLINUX_SYMBOL_STR(tinydrm_merge_clips) },
	{ 0x6e08e2ee, __VMLINUX_SYMBOL_STR(drm_fb_cma_get_gem_obj) },
	{ 0x6eb56a4d, __VMLINUX_SYMBOL_STR(tinydrm_spi_bpw_supported) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb9d1f4f2, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0xa5d86ee0, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x74c664ae, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0xd6c05b44, __VMLINUX_SYMBOL_STR(tinydrm_memcpy) },
	{ 0xa54b0625, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_init) },
	{ 0xa7e4d204, __VMLINUX_SYMBOL_STR(drm_fb_cma_create_handle) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9f4698e4, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x72e0ac3e, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc74dcbca, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0xa38f1936, __VMLINUX_SYMBOL_STR(tinydrm_enable_backlight) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tinydrm,drm_kms_helper,drm";


MODULE_INFO(srcversion, "97A52DF81A436CB91BA9444");
