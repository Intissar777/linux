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
	{ 0xc778a104, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x90f94328, __VMLINUX_SYMBOL_STR(em28xx_read_reg) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x13b9fd06, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7947db56, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x68c64e9f, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0xe62f0e8c, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x7aa2c561, __VMLINUX_SYMBOL_STR(em28xx_write_regs) },
	{ 0x856ef577, __VMLINUX_SYMBOL_STR(v4l2_ctrl_notify) },
	{ 0xeeee5caf, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0xa477f95b, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x60253f67, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0x7c68b5a7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x4dfdfe4e, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x694670ae, __VMLINUX_SYMBOL_STR(v4l2_mc_create_media_graph) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xabeb09c9, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xef3a0cbe, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x3a981c24, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x199be303, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6770c12f, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0xe333b63d, __VMLINUX_SYMBOL_STR(media_entity_setup_link) },
	{ 0xb5a54135, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x3aa38be9, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd40e693, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x9dd6a9ff, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2596b6f1, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x21640366, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x5308a261, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x596a1235, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xcd252257, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x8e0451f3, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x3f250670, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xf02a360f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x33aa64e7, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x6c8a13f0, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcd41e13d, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xafc0a13e, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x220903a, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x66b64460, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x70f64d35, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x7c803a27, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x539d78c4, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x983b00c, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3e58a4c3, __VMLINUX_SYMBOL_STR(em28xx_audio_setup) },
	{ 0x8ef90b89, __VMLINUX_SYMBOL_STR(v4l2_clk_unregister_fixed) },
	{ 0xff8e5ce, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x722a65ae, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_addr) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6687d971, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x552dca7, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0xcd22a88f, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x14e44816, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1212506d, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x316f4963, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x6d9eadf, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3f008e76, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0x13467acc, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xc1faf75d, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x414f0e49, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x170b0a8e, __VMLINUX_SYMBOL_STR(em28xx_boards) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xc88f6a0, __VMLINUX_SYMBOL_STR(em28xx_init_camera) },
	{ 0x65b7c3de, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,em28xx,videodev,media,v4l2-common,videobuf2-vmalloc,videobuf2-core";


MODULE_INFO(srcversion, "544E0738F74C3073B3CB409");
