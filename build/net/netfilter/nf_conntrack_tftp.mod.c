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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x49f2190c, __VMLINUX_SYMBOL_STR(nf_ct_helper_init) },
	{ 0x4efeff0b, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5b6e8804, __VMLINUX_SYMBOL_STR(nf_conntrack_helpers_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x909292e7, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x19e732e6, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xf49d3986, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xe3f967a8, __VMLINUX_SYMBOL_STR(nf_conntrack_helpers_unregister) },
	{ 0x3f75d657, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x14e44816, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1e92f6ec, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "04551E708ABF1AA809623A7");
