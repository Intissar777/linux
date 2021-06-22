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
	{ 0x1bd5395f, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x1c4b737c, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xd5cd514d, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x4f3cf11a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x94fb838f, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xae2c2154, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xd84224f2, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xfe8affdb, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x1018fc50, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xaed87f7, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xa4807a99, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x3e82e388, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x950d4198, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x602dfff1, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf5a604f, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xa699c1df, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xcfb60d8b, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x7e65bbee, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "D287375C85C34AF1B8FD574");
