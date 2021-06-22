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
	{ 0x7fe27d9d, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9d3d737b, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x3220bc7b, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x7164cdba, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x345f9d7e, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x3d47f03f, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xf2741ef5, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0xf51115d0, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0xe07d2d41, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x9ed241ea, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x765f1db7, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x13cc8ad8, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0x2418128, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xf6fc346c, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x9f9dc027, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xcb0d7443, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbc6d1f3, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x177413db, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x980a8591, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc27136e9, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xbb44d64c, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x4d18d78e, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x26008cf8, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x11c0f388, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x6c49f2e1, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xcba025, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0xf53d9f7b, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0xc9f0d72, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3e82e388, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x172f66d4, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x7b8649ba, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x1c50d922, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xb64b1c7a, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x96f01ac, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x22293af, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x47288fe5, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xc2ea81d4, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xf830a649, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x6834fec4, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x52f7b242, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x8690d426, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x64e12382, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x6247b526, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x2d8d66eb, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0xc1be3567, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0xd48ae9f, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xf87f24ee, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x9b2af5d6, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x49917933, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0x75ffb935, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0xbe89333, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xce43ea52, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0xff96476, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x45ac4dd7, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x6eb8a31d, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x9b54eda, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x777bc288, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "FC97004D07F4D77E5890CCD");
