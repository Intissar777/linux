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
	{ 0xafe984b7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xb29d0469, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x812c300f, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x6c3ff4fa, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6be4ac88, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x90ce8cbc, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xe440f891, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x6bce3d0a, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8cb17350, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x81490103, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x89ceec11, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xe31d561c, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x11cbda42, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x7a641ba8, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0x3406af3d, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xa50d5023, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x79d5107c, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x64e12382, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7457322, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5a0ad27, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xebd5713c, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x7dbf9238, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2b1c9ff8, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xed6600bc, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x55ec2100, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb169f081, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x6613690d, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x2d9b3e6e, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0xbd8bab45, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0xcfe1e04f, __VMLINUX_SYMBOL_STR(__sk_receive_skb) },
	{ 0xcb582fab, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xb2aa772, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0xa55e2463, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x672db906, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xcc5e0dd1, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x71a2f4cf, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x38a1a54, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x23408adf, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x9a000b3a, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x90ecb49e, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xa4edca0, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3424fb6f, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xdd018b30, __VMLINUX_SYMBOL_STR(__udp_disconnect) },
	{ 0x5c1da02a, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0xf23ce8ba, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x6a70724e, __VMLINUX_SYMBOL_STR(__ip4_datagram_connect) },
	{ 0x5de0bfeb, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x1ef57f2, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa7f3225, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x71f151aa, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0x666fcf9c, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "38ED835A4F1DBF4163D2CE9");
