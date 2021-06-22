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
	{ 0xdb92498a, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc1f00f99, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4a50149b, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd939abe3, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x87d76717, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x7aced756, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x9c5da47d, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb1cfc897, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2538ca79, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xaea0470c, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0x693d16d7, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xa9af961e, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0xdfdc14fa, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xbc0d71c3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x6f936282, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd664247b, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x909f046, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xf8736d57, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0xcf1f914b, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x50a7e6f8, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x2175b691, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5312f74b, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xbfd7cac1, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x64d11b9c, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xd3aa15f5, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ad4ad28, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0xe29441ab, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0x520b64f8, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x85d14197, __VMLINUX_SYMBOL_STR(device_add_disk) },
	{ 0xcbb677b7, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xbd2da594, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x92d3cbf7, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x3a84d760, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "667F82C8FE875380CDB18BB");
