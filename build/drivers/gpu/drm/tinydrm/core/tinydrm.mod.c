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
	{ 0x17015a9b, __VMLINUX_SYMBOL_STR(of_find_backlight_by_node) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbea18ba4, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xffc30f45, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x93fb6d68, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_init_with_funcs) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xded160f6, __VMLINUX_SYMBOL_STR(drm_crtc_force_disable_all) },
	{ 0x8fd93405, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x3dd3f751, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x633c200c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x398f4814, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1c933a8d, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_create_with_funcs) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2da4c1b7, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xb75e7dad, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x8eee2363, __VMLINUX_SYMBOL_STR(drm_simple_display_pipe_init) },
	{ 0x422de701, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0x1bf3e656, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x50acce63, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0xcc337fd5, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_restore_mode) },
	{ 0x57171b6a, __VMLINUX_SYMBOL_STR(drm_fb_cma_create_with_funcs) },
	{ 0x7f420107, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0xf090eadf, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9fbab03, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x6e08e2ee, __VMLINUX_SYMBOL_STR(drm_fb_cma_get_gem_obj) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4957abb5, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xa5d86ee0, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x247c2a6c, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x74c664ae, __VMLINUX_SYMBOL_STR(dma_buf_begin_cpu_access) },
	{ 0xf3207539, __VMLINUX_SYMBOL_STR(drm_printk) },
	{ 0x821c8566, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xc2acc033, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x638d3ae, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check) },
	{ 0x3ca5a299, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x394e5013, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x44e2df58, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0x26b3e5de, __VMLINUX_SYMBOL_STR(drm_gem_cma_prime_import_sg_table) },
	{ 0x404e0bcf, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc13c4b03, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7785729, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x1148b623, __VMLINUX_SYMBOL_STR(drm_fbdev_cma_fini) },
	{ 0xc74dcbca, __VMLINUX_SYMBOL_STR(dma_buf_end_cpu_access) },
	{ 0x1ae55e6f, __VMLINUX_SYMBOL_STR(drm_gem_cma_free_object) },
	{ 0x98ead08a, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0x973c1054, __VMLINUX_SYMBOL_STR(of_node_put) },
	{ 0x40c57909, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7fe27d9d, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe573f8e2, __VMLINUX_SYMBOL_STR(drm_atomic_helper_best_encoder) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";


MODULE_INFO(srcversion, "3600DC6800A3C66001676E5");
