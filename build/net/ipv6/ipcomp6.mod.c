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
	{ 0x1bd5395f, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x1c4b737c, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x7c10c70d, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x230528e7, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x188c3f14, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xd5cd514d, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x4f3cf11a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x94fb838f, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae2c2154, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xfea208d2, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0x58418539, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x579cee52, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0x3b2b7ef9, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xb4c695b3, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x5b5e2c73, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbf5a604f, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xa699c1df, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xcfb60d8b, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x7e65bbee, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "46C1D87521CE8B31714C7AE");
