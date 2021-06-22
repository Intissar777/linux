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
	{ 0x74ed75ca, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x7dc1d50, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xc6d832b, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7ed6b903, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xb73008b, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x246fb98, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x34360bcb, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x70db683e, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xf0aeb543, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x75c5e75a, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xd01955f8, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xd470b0e8, __VMLINUX_SYMBOL_STR(iptun_encaps) },
	{ 0x3192d712, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x3ae2d19d, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x734894c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x8088e568, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0x460255fb, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xcf64bb82, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb5476c35, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xe7f17233, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x5280b7ab, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x643e0ce5, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x59858835, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x70353a29, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2927e17c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x9ea3598f, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x90ecb49e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x5aa87009, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8af2b460, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xa3fa3af, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7b4a5783, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x69103518, __VMLINUX_SYMBOL_STR(ip6_err_gen_icmpv6_unreach) },
	{ 0xe9474bde, __VMLINUX_SYMBOL_STR(dst_cache_init) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6c209eab, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xbb963abc, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x4594abd2, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x6bce3d0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x23408adf, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x365d0709, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xada38766, __VMLINUX_SYMBOL_STR(dst_cache_destroy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x61563b46, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "B5E0C7AFDB39C12FDC72DF6");
