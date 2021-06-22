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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x75e391b6, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xb3333438, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0x34966d41, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x87311228, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x3a1e3914, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x907bd075, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf9c8b93e, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc5ad742c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8a112980, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb9e1fcf6, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc4806707, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xa6132fdb, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd77b429f, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x77ea937b, __VMLINUX_SYMBOL_STR(of_match_node) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0xb5c8b86a, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xf7735e24, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x84d10508, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xb719327a, __VMLINUX_SYMBOL_STR(mwifiex_dnld_fw) },
	{ 0x18dcf36f, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xfe0414d4, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xa96008a2, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xb07a2b90, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0xfdd23139, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0xe3e3a6e2, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xd7f27ad0, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x13a0fb8d, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x809028fa, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x1f7fe2ea, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xffae9a19, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x1ca0db5e, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe43d4594, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x96ab7480, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0xc54ef029, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb1a5099e, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xc1fb3d97, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "52EB23954A1A66B4690ABEE");
