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
	{ 0x76c1735f, __VMLINUX_SYMBOL_STR(regulator_get_bypass_regmap) },
	{ 0x3f932cc, __VMLINUX_SYMBOL_STR(regulator_is_enabled_regmap) },
	{ 0x947a51ce, __VMLINUX_SYMBOL_STR(regulator_get_voltage_sel_regmap) },
	{ 0x4d6726b5, __VMLINUX_SYMBOL_STR(regulator_set_voltage_sel_regmap) },
	{ 0x960cdf4b, __VMLINUX_SYMBOL_STR(regulator_map_voltage_linear_range) },
	{ 0xe5791a20, __VMLINUX_SYMBOL_STR(regulator_list_voltage_linear_range) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa5480074, __VMLINUX_SYMBOL_STR(of_get_regulator_init_data) },
	{ 0xb9dc6bef, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x973c1054, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0xeac5e773, __VMLINUX_SYMBOL_STR(devm_regulator_register) },
	{ 0xf6935a11, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x11217cd2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6f0c625c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xb5d217dd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x2bb81a76, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xff582981, __VMLINUX_SYMBOL_STR(regulator_enable_regmap) },
	{ 0xf4c5651b, __VMLINUX_SYMBOL_STR(regulator_disable_regmap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x5c6d9e77, __VMLINUX_SYMBOL_STR(regulator_set_bypass_regmap) },
	{ 0xa04fb028, __VMLINUX_SYMBOL_STR(rdev_get_drvdata) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";


MODULE_INFO(srcversion, "D07E0516CCD354D88548A77");
