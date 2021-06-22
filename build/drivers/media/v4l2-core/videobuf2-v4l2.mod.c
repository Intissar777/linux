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
	{ 0x8697a204, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x44b1c7de, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7098faa9, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0x310e67cc, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0x69b0cff7, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0x661d954, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf5011f2, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0x35da396f, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0xd1e16d0, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfd24fde1, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0x5308a261, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x99313093, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91447dbd, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x31c1cbae, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x841b0168, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0x983b00c, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x887b4faf, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0xb9e82f2e, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0x5f3ff274, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xdb21441a, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xff5c6388, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0x7df7e6b4, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev";


MODULE_INFO(srcversion, "8D3B8AC08F955D3CCDA74E9");
