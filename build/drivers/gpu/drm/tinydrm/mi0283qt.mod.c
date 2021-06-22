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
	{ 0x8dc59873, __VMLINUX_SYMBOL_STR(mipi_dbi_debugfs_init) },
	{ 0x65a589fe, __VMLINUX_SYMBOL_STR(tinydrm_lastclose) },
	{ 0xf6823bf5, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xcd244727, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xcaab8383, __VMLINUX_SYMBOL_STR(drm_gem_cma_mmap) },
	{ 0x5e7a1184, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xe0329b37, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xdb38325f, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x2639d553, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe73d9e95, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_prepare_fb) },
	{ 0xe1d34d8f, __VMLINUX_SYMBOL_STR(tinydrm_display_pipe_update) },
	{ 0x96526da8, __VMLINUX_SYMBOL_STR(mipi_dbi_pipe_disable) },
	{ 0x6e52678a, __VMLINUX_SYMBOL_STR(mipi_dbi_pipe_enable) },
	{ 0xbc0d71c3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xa3126341, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5cd344fb, __VMLINUX_SYMBOL_STR(mipi_dbi_command_buf) },
	{ 0xc7e94228, __VMLINUX_SYMBOL_STR(mipi_dbi_hw_reset) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e1806a8, __VMLINUX_SYMBOL_STR(devm_tinydrm_register) },
	{ 0x247c2a6c, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xa31f96c9, __VMLINUX_SYMBOL_STR(mipi_dbi_display_is_on) },
	{ 0xa71ea946, __VMLINUX_SYMBOL_STR(regulator_enable) },
	{ 0x3dbc44f9, __VMLINUX_SYMBOL_STR(mipi_dbi_spi_init) },
	{ 0x7ec8c215, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0x8a3c45d2, __VMLINUX_SYMBOL_STR(tinydrm_of_find_backlight) },
	{ 0x9bd89e40, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0xbeea083, __VMLINUX_SYMBOL_STR(devm_gpiod_get_optional) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfc651c71, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd9362615, __VMLINUX_SYMBOL_STR(tinydrm_shutdown) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,tinydrm,mipi-dbi";

MODULE_ALIAS("spi:mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qt");
MODULE_ALIAS("of:N*T*Cmulti-inno,mi0283qtC*");

MODULE_INFO(srcversion, "2DE41A922E5325A3F159887");
