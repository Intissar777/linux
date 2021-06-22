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
	{ 0x497132c7, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0xa16e974b, __VMLINUX_SYMBOL_STR(wm_adsp2_event) },
	{ 0x39d4974f, __VMLINUX_SYMBOL_STR(arizona_lhpf4_mode) },
	{ 0xb033f086, __VMLINUX_SYMBOL_STR(arizona_set_fll) },
	{ 0x92bf4e99, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x6b7fb413, __VMLINUX_SYMBOL_STR(arizona_lhpf_coeff_put) },
	{ 0x180e823, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x93c00024, __VMLINUX_SYMBOL_STR(snd_soc_unregister_platform) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x32d2df0a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x91e9f363, __VMLINUX_SYMBOL_STR(arizona_init_dai) },
	{ 0xf6935a11, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x3f5139db, __VMLINUX_SYMBOL_STR(arizona_in_ev) },
	{ 0xb3e03602, __VMLINUX_SYMBOL_STR(dapm_regulator_event) },
	{ 0x6becb8e8, __VMLINUX_SYMBOL_STR(arizona_lhpf1_mode) },
	{ 0x729a5ef3, __VMLINUX_SYMBOL_STR(arizona_mixer_values) },
	{ 0x453757ab, __VMLINUX_SYMBOL_STR(wm_adsp_compr_set_params) },
	{ 0x11d43da, __VMLINUX_SYMBOL_STR(snd_soc_add_codec_controls) },
	{ 0xca139910, __VMLINUX_SYMBOL_STR(regmap_write_async) },
	{ 0xa3ce8387, __VMLINUX_SYMBOL_STR(arizona_dvfs_down) },
	{ 0x23934c55, __VMLINUX_SYMBOL_STR(wm_adsp_compr_trigger) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4d346707, __VMLINUX_SYMBOL_STR(wm_adsp2_codec_probe) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x49d2699c, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x2bb81a76, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xfabc70bf, __VMLINUX_SYMBOL_STR(arizona_init_dvfs) },
	{ 0x15ff9a3c, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x2a7b694d, __VMLINUX_SYMBOL_STR(wm_adsp2_init) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf935efe2, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x41301fe5, __VMLINUX_SYMBOL_STR(wm_adsp_compr_free) },
	{ 0xa306f34d, __VMLINUX_SYMBOL_STR(arizona_dvfs_up) },
	{ 0x10e85329, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw_range) },
	{ 0xf241b2b3, __VMLINUX_SYMBOL_STR(wm_adsp_compr_open) },
	{ 0xedd02875, __VMLINUX_SYMBOL_STR(wm_adsp2_codec_remove) },
	{ 0xc9c29637, __VMLINUX_SYMBOL_STR(arizona_mixer_tlv) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xda916bc4, __VMLINUX_SYMBOL_STR(arizona_out_ev) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3b59d0d6, __VMLINUX_SYMBOL_STR(arizona_adsp2_rate_controls) },
	{ 0xa413778a, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw_range) },
	{ 0x71338ec1, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info) },
	{ 0x9d38743b, __VMLINUX_SYMBOL_STR(arizona_init_spk) },
	{ 0xaa43c9a9, __VMLINUX_SYMBOL_STR(arizona_hp_ev) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x319ec87d, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw_range) },
	{ 0xcbf626b2, __VMLINUX_SYMBOL_STR(wm_adsp_compr_copy) },
	{ 0xd92d3abe, __VMLINUX_SYMBOL_STR(arizona_simple_dai_ops) },
	{ 0x5af896ca, __VMLINUX_SYMBOL_STR(wm_adsp_compr_get_caps) },
	{ 0x585c152, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0x320121fa, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xfc73a9c1, __VMLINUX_SYMBOL_STR(arizona_lhpf3_mode) },
	{ 0x640c96af, __VMLINUX_SYMBOL_STR(arizona_out_vi_ramp) },
	{ 0xfa8e46ba, __VMLINUX_SYMBOL_STR(arizona_isrc_fsl) },
	{ 0x1c67159f, __VMLINUX_SYMBOL_STR(arizona_in_vi_ramp) },
	{ 0x72aa078f, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x3a8bec94, __VMLINUX_SYMBOL_STR(arizona_dai_ops) },
	{ 0x7f26f273, __VMLINUX_SYMBOL_STR(arizona_mixer_texts) },
	{ 0xbbc3fd63, __VMLINUX_SYMBOL_STR(arizona_init_fll) },
	{ 0x5cbed3b2, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x378e3f56, __VMLINUX_SYMBOL_STR(snd_soc_register_platform) },
	{ 0x8ce60dd3, __VMLINUX_SYMBOL_STR(arizona_set_fll_refclk) },
	{ 0xb0a68e97, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x74b7d847, __VMLINUX_SYMBOL_STR(arizona_init_gpio) },
	{ 0x88476e10, __VMLINUX_SYMBOL_STR(arizona_dvfs_sysclk_ev) },
	{ 0x5dbf76f, __VMLINUX_SYMBOL_STR(arizona_out_vd_ramp) },
	{ 0x7db0745f, __VMLINUX_SYMBOL_STR(arizona_in_vd_ramp) },
	{ 0x53dc9cdb, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x728b3deb, __VMLINUX_SYMBOL_STR(arizona_eq_coeff_put) },
	{ 0xb5d217dd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x8f651a1, __VMLINUX_SYMBOL_STR(wm_adsp2_remove) },
	{ 0x90606edd, __VMLINUX_SYMBOL_STR(arizona_free_spk) },
	{ 0x886f6829, __VMLINUX_SYMBOL_STR(snd_soc_bytes_get) },
	{ 0x4d2e7b13, __VMLINUX_SYMBOL_STR(arizona_set_sysclk) },
	{ 0xbeebf907, __VMLINUX_SYMBOL_STR(wm_adsp2_early_event) },
	{ 0x2a128f57, __VMLINUX_SYMBOL_STR(arizona_ng_hold) },
	{ 0x213dc2fa, __VMLINUX_SYMBOL_STR(snd_soc_new_compress) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x93790ff9, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0x1535c0e4, __VMLINUX_SYMBOL_STR(wm_adsp_compr_handle_irq) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xd9fb5645, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info_ext) },
	{ 0x9221e043, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb137ece8, __VMLINUX_SYMBOL_STR(wm_adsp_compr_pointer) },
	{ 0x1d059a81, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
	{ 0x5a04a275, __VMLINUX_SYMBOL_STR(arizona_lhpf2_mode) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-wm-adsp,snd-soc-arizona,snd-soc-core";


MODULE_INFO(srcversion, "FCDEDE1DF3149D12C10571F");
