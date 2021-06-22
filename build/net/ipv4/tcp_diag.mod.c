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
	{ 0x8377fa54, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x8a1b5cf, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x5e7221d7, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x9758abd, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x8a69a114, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9e71f078, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "5287A70C2850BDEED0BDE49");
