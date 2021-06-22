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
	{ 0x2e2df140, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x6ae62bdb, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xbe89333, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xc2ea81d4, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x881a7c25, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xfbee593d, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0xa15e9f20, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x613cb3b2, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x99e835e, __VMLINUX_SYMBOL_STR(bt_sock_register) },
	{ 0xdf49127f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x92bddce2, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0xab271178, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x7457322, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa00d44e, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x949dd683, __VMLINUX_SYMBOL_STR(bt_sock_unlink) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf87da9d6, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x5a0ad27, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x639ad625, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x9092b838, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x9693d9a1, __VMLINUX_SYMBOL_STR(l2cap_is_socket) },
	{ 0xf3982182, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcc1fb551, __VMLINUX_SYMBOL_STR(baswap) },
	{ 0x365d0709, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x59858835, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xed6600bc, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x55ec2100, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8fea24bd, __VMLINUX_SYMBOL_STR(bt_sock_unregister) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe1284bab, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xae3678c3, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x8690d426, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2a4e2e8e, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x5663e5ac, __VMLINUX_SYMBOL_STR(bt_sock_link) },
	{ 0xe95c0394, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x18dcf36f, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0xa55e2463, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xd98cd883, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x38a1a54, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x2927e17c, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xfceaf141, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x3d7b3bbb, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0xbb004d68, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xfcb855f9, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x3a038a5a, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x46d63b5a, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x8ba41b9e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x76d9bf11, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0xf316cd58, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0x4f022c2a, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xcd06ad8d, __VMLINUX_SYMBOL_STR(bt_procfs_init) },
	{ 0xf27552de, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x13c30ba3, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x95689ae6, __VMLINUX_SYMBOL_STR(bt_procfs_cleanup) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "CFB3A17641650F867CEC98F");
