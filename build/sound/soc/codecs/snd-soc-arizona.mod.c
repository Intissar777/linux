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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x497132c7, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xce25388c, __VMLINUX_SYMBOL_STR(regulator_set_voltage) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x5d02bc7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_del_routes) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe1b92eb7, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x172f021e, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x6f5d92d4, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xd7343a87, __VMLINUX_SYMBOL_STR(regmap_multi_reg_write) },
	{ 0xf6935a11, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5f7dbe67, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc29548a6, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x2bb81a76, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb9c96d3e, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_unregister) },
	{ 0xf935efe2, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x985f6ef0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7929e372, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc2d71b3d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1aa83acf, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xeb907f81, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbcfe0a54, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x585c152, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0x320121fa, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x72aa078f, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6f0c625c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xacca4ec5, __VMLINUX_SYMBOL_STR(blocking_notifier_chain_register) },
	{ 0x53dc9cdb, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xb5d217dd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1344fe39, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x93790ff9, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2cab5e69, __VMLINUX_SYMBOL_STR(regmap_get_val_bytes) },
	{ 0xbc2570d7, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xca683108, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x932271da, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "803779B967CB2989E63937E");
