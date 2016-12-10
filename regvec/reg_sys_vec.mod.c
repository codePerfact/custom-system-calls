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
	{ 0x75534af6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5263768, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xd1b69da6, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3f7bf6d0, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8a53c8ad, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x61072580, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x36542235, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x786b927d, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8011926e, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CD24ADABF336DA2987A1976");
