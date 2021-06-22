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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7947db56, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x94474949, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xa477f95b, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x4dfdfe4e, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xabeb09c9, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf097c726, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x199be303, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x752d5dba, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0xb5a54135, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x3aa38be9, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xd40e693, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x9dd6a9ff, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2596b6f1, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x21640366, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x596a1235, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x17d0e254, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x8e0451f3, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xf02a360f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x33aa64e7, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x9adc66c, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcd41e13d, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xa6b854dc, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x5d5b9c98, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x220903a, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x66b64460, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe6b52cb7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x496f6fb, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xfe382870, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5fbea82, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x8e9a688b, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x539d78c4, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x983b00c, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3e372736, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x630a891c, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xed91d383, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6687d971, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xcd22a88f, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfee9968a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xef376e2a, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x28667e34, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd222973d, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xc1faf75d, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x968da38b, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x2d34e7d2, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x2b6a2531, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x414f0e49, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xde10e87b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x65b7c3de, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,snd-pcm,videobuf2-vmalloc,videobuf2-core,snd";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F71p3301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C64929937A659F36888E4BE");
