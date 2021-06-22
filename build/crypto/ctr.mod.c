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
	{ 0xae5bad0, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x2772e1dc, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xc6531335, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xa28d36c, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0xf136d8d3, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x52775ec7, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x53b160fa, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2b290d2, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x75ca4191, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x66d8ad12, __VMLINUX_SYMBOL_STR(skcipher_register_instance) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6d4c2d93, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xd19f876e, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x921d581a, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2275D2AE579A78E3482B8FE");
