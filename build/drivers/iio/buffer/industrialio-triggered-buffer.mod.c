#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe7dce76d, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0xde82319f, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xa9412670, __VMLINUX_SYMBOL_STR(devm_iio_device_match) },
	{ 0xab66fcaa, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa2324d5b, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0xcf9e4446, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0x992ff9b9, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x5780a326, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0x487d3c5b, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0xfbf52f94, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0x8f657fe1, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";


MODULE_INFO(srcversion, "E6C701783AF27252026FF9B");
