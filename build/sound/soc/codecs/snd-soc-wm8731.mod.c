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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x9397f183, __VMLINUX_SYMBOL_STR(__devm_regmap_init_spi) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x32d2df0a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x5d1d71ea, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x6f5d92d4, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xf6935a11, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xa3126341, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x49d2699c, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x15ff9a3c, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x40cd8942, __VMLINUX_SYMBOL_STR(devm_regulator_bulk_get) },
	{ 0xfef0695c, __VMLINUX_SYMBOL_STR(regulator_bulk_enable) },
	{ 0xf935efe2, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x7929e372, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc2d71b3d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1aa83acf, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xbc0d71c3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbcfe0a54, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xa0195a8c, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x320121fa, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x31f5e72b, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8242e79c, __VMLINUX_SYMBOL_STR(regulator_bulk_disable) },
	{ 0xff227eee, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x6f0c625c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0x8c211eeb, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xb0a68e97, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x314cad3d, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9221e043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbc2570d7, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xad83053c, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x932271da, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x1d059a81, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd";

MODULE_ALIAS("of:N*T*Cwlf,wm8731");
MODULE_ALIAS("of:N*T*Cwlf,wm8731C*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "5D6C97676156190B1B20345");
