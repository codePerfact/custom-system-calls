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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x26197ffb, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3aba68e9, __VMLINUX_SYMBOL_STR(sysptr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbea6d7c7, __VMLINUX_SYMBOL_STR(get_vector_address) },
	{ 0x85147b0, __VMLINUX_SYMBOL_STR(get_ioctl_module) },
	{ 0x8aa0a3da, __VMLINUX_SYMBOL_STR(_do_fork) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x36542235, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x75534af6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=reg_sys_vec,ioctl_vector";


MODULE_INFO(srcversion, "C020B252709942F3E072E46");
