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
	{ 0x3f630aeb, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x684b87fc, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x274f7f77, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x81490103, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x89ceec11, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xe31d561c, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x64e12382, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x7457322, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5a0ad27, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xed6600bc, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x55ec2100, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x437a0d6d, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xbfbc32d1, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x54dce828, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2a4e2e8e, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x82eeb766, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x5449d6a6, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xd730d86c, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x71a2f4cf, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf3a80b89, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3c33bba4, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x42c1d94, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x46d63b5a, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x1e400890, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xa6ad2720, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x666fcf9c, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "5B4ACAF138155D753B63474");
