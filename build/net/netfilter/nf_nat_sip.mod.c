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
	{ 0x14b5c957, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xcacb4811, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x2e0c5f4f, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0x2a42c14f, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0xd6bdb309, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0xb00a09ec, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xd850480e, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x2c784c59, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x39667fac, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x3f75d657, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x88d898c4, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf49d3986, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8f0fafeb, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0xd3f22651, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x636a1454, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x99ea743, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xde0488df, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "CB586644BFBCAF4CC83A97D");
