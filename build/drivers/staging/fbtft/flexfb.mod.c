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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd29ace7d, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x69173b47, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x14e44816, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x7fe27d9d, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xb909bbd, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x530d79a8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbc0d71c3, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xf9422afd, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa3126341, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x7cf8de2c, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0xefe86d29, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1dcdf0f5, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0x77e13a7f, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0x24df16a8, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0x5902c881, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0x70aa5b33, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x1e900dad, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0x43d0fc5e, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0xdc00bee2, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x958ebb0b, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0x161bb4ed, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0x91fb02d6, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0xc65ce899, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0x8d9900ef, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x70c91651, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x4df4c8fc, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0x31230869, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "B79CF6C8B677A08DFC10304");
