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
	{ 0x5587d96b, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xe9305a5c, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0x5c90f0d1, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x5f908dc5, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xa459f772, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xda50dd96, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0xd6758a1c, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule_put) },
	{ 0x9a79d043, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x8a69a114, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdda24b6a, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa7b35530, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x279978d2, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
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


MODULE_INFO(srcversion, "9B8AC19ADC24B5D9043E44D");
