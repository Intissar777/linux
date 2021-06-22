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
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x13ece3df, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xa8075f02, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x74ed75ca, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x7dc1d50, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xe9263066, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x2443ca4d, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x70db683e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x246fb98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x34360bcb, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0xc6d832b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7ed6b903, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xb73008b, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce21a10e, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xc9a9621f, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x90ecb49e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x5aa87009, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x56bf3f07, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x8af2b460, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xa3fa3af, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7b4a5783, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe8736785, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x6c1961c8, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xb5476c35, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xea9742be, __VMLINUX_SYMBOL_STR(ip_md_tunnel_xmit) },
	{ 0xe7f17233, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xbe29e967, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x689009db, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xc033042, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x94cdff61, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x70353a29, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "254EFDBDECABAFD978107F9");
