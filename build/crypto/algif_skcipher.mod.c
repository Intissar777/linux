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
	{ 0x7457322, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfbee593d, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x881a7c25, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x2a4e2e8e, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xed6600bc, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xc90f26ea, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x613cb3b2, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x55ec2100, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a0ad27, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x46d63b5a, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xf3982182, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xfb98eef7, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0x86e6272e, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xcc677082, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x5889f9b3, __VMLINUX_SYMBOL_STR(af_alg_link_sg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4dbb773c, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x611db9fc, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x5cf7ffd0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xe1549d7, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x81490103, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xb9e79acf, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x987c11c7, __VMLINUX_SYMBOL_STR(__pv_phys_pfn_offset) },
	{ 0x6d7b16e1, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x470a27a2, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0x223f6453, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x3e59f657, __VMLINUX_SYMBOL_STR(crypto_alloc_skcipher) },
	{ 0xf6f5580, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfd6d346, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xff5396d6, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7e752293, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa5a91d6b, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0xec6938e9, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfe33c6c3, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe42e231, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xd3b62445, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0xb36d6497, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x9dd343a2, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x9c1b231c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xafe984b7, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x13280970, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "A4C0EC4DC9DCA27C2CF1EA5");
