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
	{ 0x9520ef7b, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x7ae17a9, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x5856eafc, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x64f50d8d, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x307920e6, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x8c6765af, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x68cf4a12, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x49121d2a, __VMLINUX_SYMBOL_STR(hid_register_report) },
	{ 0x9f567401, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbbece876, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb62b97fe, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0xa597ee71, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xa0fcd3fc, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");

MODULE_INFO(srcversion, "052A16354514F3D4BC8E505");
