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
	{ 0xe8b89bce, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xe098f77a, __VMLINUX_SYMBOL_STR(asoc_simple_card_canonicalize_dailink) },
	{ 0xcb9f74f7, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x2d8ba330, __VMLINUX_SYMBOL_STR(asoc_simple_card_canonicalize_cpu) },
	{ 0x3dd3f751, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x737036a7, __VMLINUX_SYMBOL_STR(asoc_simple_card_clean_reference) },
	{ 0x8dfdf50d, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3199c87d, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0x3e9d3734, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x92ad5e1, __VMLINUX_SYMBOL_STR(asoc_simple_card_set_dailink_name) },
	{ 0xb9dc6bef, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xae418f8c, __VMLINUX_SYMBOL_STR(asoc_simple_card_init_dai) },
	{ 0x81f2a52a, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_clk) },
	{ 0xe75203d3, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_daifmt) },
	{ 0xe912cd9a, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x149259a, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc8564f23, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x4ee23bd9, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xfb462134, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x92a17381, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x66b15d75, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_card_name) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfef222f2, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xc5844d6f, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x973c1054, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc5095032, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
	{ 0xb72821cb, __VMLINUX_SYMBOL_STR(asoc_simple_card_parse_dai) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-simple-card-utils";

MODULE_ALIAS("of:N*T*Csimple-audio-card");
MODULE_ALIAS("of:N*T*Csimple-audio-cardC*");

MODULE_INFO(srcversion, "A58BA05B55CDCFC260D86B9");
