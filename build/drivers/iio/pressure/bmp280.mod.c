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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x92bf4e99, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x180e823, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x90eea5aa, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x172f021e, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xfc651c71, __VMLINUX_SYMBOL_STR(regulator_disable) },
	{ 0xf6935a11, __VMLINUX_SYMBOL_STR(regmap_update_bits_base) },
	{ 0x3914c34e, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x4951ecaa, __VMLINUX_SYMBOL_STR(devm_gpiod_get) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc29548a6, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x2bb81a76, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb13fee78, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x7593d385, __VMLINUX_SYMBOL_STR(div64_s64) },
	{ 0xf185456e, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa48f66d, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6cebcbd3, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9bd89e40, __VMLINUX_SYMBOL_STR(devm_regulator_get) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x5cbed3b2, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x2fb6de5d, __VMLINUX_SYMBOL_STR(add_device_randomness) },
	{ 0xdbf6729e, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xb745243f, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe8e09107, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xe43d4594, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xbc2570d7, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xa71ea946, __VMLINUX_SYMBOL_STR(regulator_enable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio";


MODULE_INFO(srcversion, "44C03EABAF3C673EE5A9ABE");
