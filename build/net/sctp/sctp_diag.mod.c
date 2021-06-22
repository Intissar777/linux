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
	{  0xde35d, __VMLINUX_SYMBOL_STR(sctp_for_each_endpoint) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x957b794e, __VMLINUX_SYMBOL_STR(sctp_for_each_transport) },
	{ 0x7fa87c51, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xafe984b7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x48b59f3f, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x2f32a8fe, __VMLINUX_SYMBOL_STR(inet_diag_msg_common_fill) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2db3b502, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x6067164e, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x74b7d7fe, __VMLINUX_SYMBOL_STR(inet_diag_msg_attrs_fill) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb4f2ecf5, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x151e8a61, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xe159a84b, __VMLINUX_SYMBOL_STR(sctp_transport_lookup_process) },
	{ 0x9b76cf75, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x75b5ef68, __VMLINUX_SYMBOL_STR(sctp_get_sctp_info) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,sctp";


MODULE_INFO(srcversion, "17DD87A485BB47119E35E26");
