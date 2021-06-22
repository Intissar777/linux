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
	{ 0x83b04d63, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0x81de806a, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xbb068a3a, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x4bf3762e, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xb31e38f1, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x56271728, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x2c5e4b13, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x794b88d7, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";


MODULE_INFO(srcversion, "511630B11AB6D3D88F123BB");
