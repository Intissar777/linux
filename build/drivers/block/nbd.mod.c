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
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdb2c955b, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x90b25d8e, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9dec1d15, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xdfdc14fa, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc35a3d9b, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x85d14197, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x6b20e9ee, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x53a3e53a, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x2175b691, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5cce917e, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xcdc9b978, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xd3f6662d, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x4a50149b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1f0a044, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xce6cd857, __VMLINUX_SYMBOL_STR(blkdev_reread_part) },
	{ 0x3e8d6c8d, __VMLINUX_SYMBOL_STR(set_device_ro) },
	{ 0x3060491f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x8cbef747, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0xffd763ac, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x22293af, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0x695d3734, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x4af40d65, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0xcf4b6577, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xaf16907c, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xe9fdc258, __VMLINUX_SYMBOL_STR(blk_queue_write_cache) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc2ea81d4, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xc1f00f99, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x89924bbb, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0x227921e1, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0xcf338932, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4b1840d0, __VMLINUX_SYMBOL_STR(kill_bdev) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd94c17ba, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x369f4a6a, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0xc1b5cf08, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd20cd42c, __VMLINUX_SYMBOL_STR(blk_mq_request_started) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88861b74, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0xb7bb8d19, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x8690d426, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x39d642d2, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdc8d1ea1, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf68fb2c4, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6c3adbe6, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0xbe89333, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2F1FEBA530473243901C700");
