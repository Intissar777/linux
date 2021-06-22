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
	{ 0xf2c9499c, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x6a088852, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xd0f316f3, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x1a5460d2, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0xaeeca771, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xf0b86853, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0xe7cf0df8, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0xc5871f83, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5cf7ffd0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xb36d6497, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xe0230518, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xb9e79acf, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x66c874f0, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb16e8a78, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x3bc9a40c, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0xd5a2b2b6, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x46feb099, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9899180a, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xae245506, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xcd485666, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x3d0e4a5f, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x601c7dff, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x7e299eb2, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xda151b1a, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xa1da16fb, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x78d5542d, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x2ec1fa29, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0x8608b4f2, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xd3cbc5b9, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0x2e98649b, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";


MODULE_INFO(srcversion, "894585A6633AC66B67F7C6B");
