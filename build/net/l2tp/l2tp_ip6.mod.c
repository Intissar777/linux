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
	{ 0x6be4ac88, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x6bb060a9, __VMLINUX_SYMBOL_STR(inet6_hash) },
	{ 0x6fca12b, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0x89ea5ad8, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xe060dbd0, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0x64e12382, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x7457322, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x79d5107c, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x11cbda42, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xf23ce8ba, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x9a000b3a, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xb169f081, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xed6600bc, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xb89dea04, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0x71a2f4cf, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x55ec2100, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a0ad27, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xa50d5023, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x43e8dee5, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0x3b806d0a, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0x7dda2995, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x99b76884, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0x38a1a54, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x3fd245dd, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0xd4c651f5, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xa55e2463, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x89ceec11, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x3406af3d, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xf9fb3cb5, __VMLINUX_SYMBOL_STR(__ip6_datagram_connect) },
	{ 0xdd018b30, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0xcb1d744a, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x3424fb6f, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xad3f4615, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x29134518, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x99d82c07, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0xe993bf5b, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x8ed870c8, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x9f693cbb, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0x6bce3d0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x78aa910c, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x3a50f0a0, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0x89b49437, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0xffb74af4, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7561f6f2, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x666fcf9c, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xebd5713c, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x2d9b3e6e, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x2005f5b0, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x7dbf9238, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xe31d561c, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcc7b3dad, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xf4fe5ec3, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xafe984b7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcfe1e04f, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x90ecb49e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x812c300f, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xb29d0469, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x8cb17350, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x1ef57f2, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6,l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "E5928B6DFB93966B74CB86A");
