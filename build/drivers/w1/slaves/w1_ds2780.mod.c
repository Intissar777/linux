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
	{ 0x24f34f89, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6df2635e, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xf227c885, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf0442a7c, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x5c3a4fa4, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x724351a1, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0xe99835ba, __VMLINUX_SYMBOL_STR(w1_read_block) },
	{ 0x91827fce, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x818ab1b6, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xe2423f16, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "27B027B6337420EBFCD9E6D");
