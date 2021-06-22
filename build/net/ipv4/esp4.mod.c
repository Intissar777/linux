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
	{ 0xa74d7b39, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x1472acd1, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0x287e2bed, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x4f3cf11a, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xc181c2eb, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xae2c2154, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5c9a8413, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x75931eaf, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0x5299d389, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xff92f6f1, __VMLINUX_SYMBOL_STR(pskb_put) },
	{ 0x880ca0ff, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x174371aa, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb8a13955, __VMLINUX_SYMBOL_STR(skb_to_sgvec) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xaed87f7, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x950d4198, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0xb4ee5d2e, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x570c98d4, __VMLINUX_SYMBOL_STR(km_new_mapping) },
	{ 0x96a8d395, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x602dfff1, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa3fa3af, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xa699c1df, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x7b4a5783, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x7e65bbee, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "18AABAAB58B8B94599DABF4");
