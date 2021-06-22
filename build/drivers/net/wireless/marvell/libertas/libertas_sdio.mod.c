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
	{ 0x193ba2a1, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xc03243a9, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x92bf4e99, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x21ee3e19, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0x34966d41, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x87311228, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x3a1e3914, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x73fbbc1c, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0xc29548a6, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x11bdc413, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0xdb3ac797, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc4806707, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdab80732, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6b3b246b, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x52dc4669, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdc25205f, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0x23b3fbc, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0x512875c1, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x622598b1, __VMLINUX_SYMBOL_STR(init_wait_entry) },
	{ 0xb5c8b86a, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xf7735e24, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x3453137f, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0xc255cc5e, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x84d10508, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x3d552243, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfe0414d4, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x61962b44, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xeebfd70a, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x5cf55a39, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0xa96008a2, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x27e13652, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x9b8518b6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc7152a58, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x809028fa, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x1f7fe2ea, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc54ef029, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb1a5099e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xc1fb3d97, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xc3b3cfda, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "1832051CEB4986A6E34A97A");
