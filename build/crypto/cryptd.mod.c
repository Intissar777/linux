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
	{ 0x52775ec7, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf2681d6c, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5251a547, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xf136d8d3, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x19d27d40, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xd59bd237, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x715a0579, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xae5bad0, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xba613a1e, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4c33559b, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x53b160fa, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xda9fd4fc, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x4e4ce52d, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0xb45f2d4, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x2772e1dc, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x8f584900, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0xfae4ce30, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0x6d4c2d93, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x75931eaf, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x6232ee27, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x5c9a8413, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x5299d389, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x921d581a, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x88b64805, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd1ae97, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f558779, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x477e21ec, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x3e82e388, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CA499BAA1909878A745535B");
