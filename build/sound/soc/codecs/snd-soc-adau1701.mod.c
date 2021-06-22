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
	{ 0x80dc39f9, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x94a477ba, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5d1d71ea, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xf6935a11, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x4bdd5b02, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x3d9835a6, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x1403d737, __VMLINUX_SYMBOL_STR(devm_sigmadsp_init_i2c) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x49d2699c, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x2bb81a76, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x15ff9a3c, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x7b12e568, __VMLINUX_SYMBOL_STR(sigmadsp_attach) },
	{ 0x40cd8942, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xfef0695c, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0x8db692be, __VMLINUX_SYMBOL_STR(of_property_read_variable_u8_array) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7069ac95, __VMLINUX_SYMBOL_STR(sigmadsp_reset) },
	{ 0x6c90351e, __VMLINUX_SYMBOL_STR(sigmadsp_setup) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x39821e70, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x320121fa, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x31f5e72b, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x69787853, __VMLINUX_SYMBOL_STR(sigmadsp_restrict_params) },
	{ 0x8242e79c, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0x149259a, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xb0a68e97, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x314cad3d, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5aa6df1b, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0xc5844d6f, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x9221e043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbc2570d7, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xad83053c, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp";

MODULE_ALIAS("of:N*T*Cadi,adau1701");
MODULE_ALIAS("of:N*T*Cadi,adau1701C*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "4F641C99710DC4EC858EC4B");
