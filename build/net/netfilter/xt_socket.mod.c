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
	{ 0xbf65d6cc, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x6e65fb7d, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x5c90f0d1, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x5f908dc5, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xa459f772, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0x11aca612, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x8a69a114, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0xa699afe7, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xdda24b6a, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x20911b81, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x1a758214, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4,ipv6";


MODULE_INFO(srcversion, "A3EE5A095D3293D25219994");
