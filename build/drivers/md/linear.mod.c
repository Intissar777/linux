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
	{ 0xc473a870, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x601734f0, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xbe5c863b, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x166d3fe9, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0xe8f719b3, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0x8c8c87ba, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xeda292e0, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xaf5401ff, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x14d23534, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0xc44bb1cf, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x6d61c1e4, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x508db8e3, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x78d5542d, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xae245506, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x41485cdd, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xa1da16fb, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x3a9fdd63, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "9124C78D3BCDC385EC0A9E3");
