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
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x92c91974, __VMLINUX_SYMBOL_STR(rt_mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4bdd5b02, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc2e8ee7a, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x147330db, __VMLINUX_SYMBOL_STR(rt_mutex_trylock) },
	{ 0xbafae9af, __VMLINUX_SYMBOL_STR(rt_mutex_unlock) },
	{ 0x65d0afce, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xb9dc6bef, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0xbd89ba67, __VMLINUX_SYMBOL_STR(i2c_adapter_type) },
	{ 0xb7245a0, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x13656c22, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe7560978, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x221c98ec, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0xe912cd9a, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa5e1d576, __VMLINUX_SYMBOL_STR(of_node_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc4bf2905, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc5844d6f, __VMLINUX_SYMBOL_STR(of_property_read_variable_u32_array) },
	{ 0x973c1054, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2411923D6CA2A67D87AE136");
