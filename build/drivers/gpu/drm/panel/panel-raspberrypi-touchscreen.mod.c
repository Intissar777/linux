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
	{ 0x7abd78bc, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_unregister) },
	{ 0x4069d4b7, __VMLINUX_SYMBOL_STR(mipi_dsi_driver_register_full) },
	{ 0x28d87fb5, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xf15c008a, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0x10af6539, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x973c1054, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xe9808e86, __VMLINUX_SYMBOL_STR(of_find_i2c_device_by_node) },
	{ 0x3dd3f751, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1545fe31, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x7785729, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x7f420107, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0xf9fbab03, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0xd1f60e20, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf5d36fde, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0x84ef8ff1, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0x224024b8, __VMLINUX_SYMBOL_STR(mipi_dsi_detach) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e678d51, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

MODULE_ALIAS("of:N*T*Craspberrypi,touchscreen");
MODULE_ALIAS("of:N*T*Craspberrypi,touchscreenC*");

MODULE_INFO(srcversion, "93911506D0FD6586963F8B1");
