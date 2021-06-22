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
	{ 0xe0f560d, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x57f91de8, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7fa87c51, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x151e8a61, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x52484fcd, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x20e69aa9, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x5b41261c, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0xf136d8d3, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xe1284bab, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x7dbecdf2, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0xae3678c3, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x6ae62bdb, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x3cfa3009, __VMLINUX_SYMBOL_STR(crypto_mod_get) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xab271178, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x5365d1c7, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5bd0748f, __VMLINUX_SYMBOL_STR(crypto_del_default_rng) },
	{ 0xbfc89c07, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xad04525e, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "48027CDB2FE600104FA0BDF");
