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
	{ 0xa37168aa, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf181dec0, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x9a5042c2, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa9379865, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x52fedd17, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xa0ea819e, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x7861f5a7, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xa42e5b4a, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x7ad25c06, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xcf321a79, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xfd97a3c4, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x8ba41b9e, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc1936e8c, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x369f5cf5, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x3d744f0c, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xfd638a03, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe135f7aa, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x56623bdc, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa917d3dc, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x8c7f5bf6, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x9b8518b6, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x2f1f8f20, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x86d7d971, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x9138e27f, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1ef58f69, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xb3b2aeef, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xeedd67e7, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x7330436b, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xf00cf5dd, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xdd23ba6f, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x1ebc71db, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9a18d7ff, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x742ca04e, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2879c9ec, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc5ad742c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xc846ad9d, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9188BA9738A6BCF0D399BC5");
