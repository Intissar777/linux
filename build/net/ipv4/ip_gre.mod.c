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
	{ 0xb73008b, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7dc1d50, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x74ed75ca, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x6bce3d0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x56bf3f07, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xb380b7b5, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xa3fa3af, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe8736785, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc1a12c00, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xecf0f420, __VMLINUX_SYMBOL_STR(dst_cache_get_ip4) },
	{ 0xb5476c35, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x8af2b460, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x689009db, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xa8075f02, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x3fe322fd, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x97a82636, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0xc033042, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x246fb98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x2443ca4d, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x365d0709, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xe5f8bf4d, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd01955f8, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xc9a9621f, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x6c1961c8, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x13ece3df, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x70db683e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xbe29e967, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x94cdff61, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0x70af7992, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7b4a5783, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xd84224f2, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xfcb855f9, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xce21a10e, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xe7f17233, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x23408adf, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xe110117a, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x8ba41b9e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x69103518, __VMLINUX_SYMBOL_STR(ip6_err_gen_icmpv6_unreach) },
	{ 0xc6d832b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xcb4cb07f, __VMLINUX_SYMBOL_STR(dst_cache_set_ip4) },
	{ 0x70353a29, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xe9263066, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x727ccd7, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x4647a82d, __VMLINUX_SYMBOL_STR(gre_parse_header) },
	{ 0x5aa87009, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre,ipv6";


MODULE_INFO(srcversion, "DE4E2DF53A79551520C494C");
