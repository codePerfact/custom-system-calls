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
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0x75534af6, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x256cebac, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0xbea6d7c7, __VMLINUX_SYMBOL_STR(get_vector_address) },
	{ 0x586c815, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0xc2d257bc, __VMLINUX_SYMBOL_STR(reduce_ref_count) },
	{ 0xd1b69da6, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4967dd81, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3f7bf6d0, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8a53c8ad, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xea6865b3, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0x61072580, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x36542235, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8351135a, __VMLINUX_SYMBOL_STR(get_vector_name) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8011926e, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=reg_sys_vec";


MODULE_INFO(srcversion, "D2E5A66CFC9B7B5EE5EBCAB");
