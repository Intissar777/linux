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
	{ 0xe37ec487, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xea4b3f94, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc4db17bf, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x3c7b2fa, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xea7702b1, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x31c85d0e, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0xf802a4c7, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0x725a7c7d, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x7d2fc398, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3ff9b7da, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";


MODULE_INFO(srcversion, "1F0CF39D3A7E66C295AA4FE");
