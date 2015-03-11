#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
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
	{ 0x387121e0, "module_layout" },
	{ 0x80e3c60d, "register_netdevice" },
	{ 0xf7027b17, "sdio_writeb" },
	{ 0xd1adb5b0, "sdio_readb" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x20fd0cbb, "gpio_write_one_pin_value" },
	{ 0x63ec6978, "kmalloc_caches" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x383e8a27, "gpio_request_ex" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2b688622, "complete_and_exit" },
	{ 0xfcaf7b51, "wiphy_free" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0x577b41e0, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x15692c87, "param_ops_int" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0x2e5810c6, "__aeabi_unwind_cpp_pr1" },
	{ 0xc996d097, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0xc7ec6c27, "strspn" },
	{ 0x1b18f808, "wakeup_source_add" },
	{ 0xa13c65c1, "dev_set_drvdata" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x3e45e9ff, "register_inetaddr_notifier" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0xbdf94507, "gpio_read_one_pin_value" },
	{ 0xb0091fd1, "send_sig" },
	{ 0xfb87762d, "arm_dma_ops" },
	{ 0xf9000681, "__pm_stay_awake" },
	{ 0xa8cde9a7, "remove_wait_queue" },
	{ 0x9aca444b, "get_monotonic_boottime" },
	{ 0x3aa7a433, "cfg80211_inform_bss_frame" },
	{ 0x54c8ca2f, "sdio_enable_func" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xbed60566, "sub_preempt_count" },
	{ 0x50cd7e03, "skb_clone" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8949858b, "schedule_work" },
	{ 0x4fe38dbd, "down_interruptible" },
	{ 0x63ecad53, "register_netdevice_notifier" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x503eb9f, "remove_proc_entry" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0xe2fae716, "kmemdup" },
	{ 0xbdcf6c1d, "cfg80211_rx_mgmt" },
	{ 0xdaec235, "filp_close" },
	{ 0x7513e94e, "ieee80211_channel_to_frequency" },
	{ 0x4e830a3e, "strnicmp" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb0e29f, "init_timer_key" },
	{ 0x62b72b0d, "mutex_unlock" },
	{ 0x4cabed9, "rfkill_register" },
	{ 0xb302bea9, "__pm_wakeup_event" },
	{ 0x6afd0f34, "cfg80211_del_sta" },
	{ 0x7fe1a403, "cfg80211_find_ie" },
	{ 0x91715312, "sprintf" },
	{ 0x4521c60, "skb_realloc_headroom" },
	{ 0xc4fd355a, "kthread_create_on_node" },
	{ 0x6ccf7bd7, "__pv_phys_offset" },
	{ 0x7d11c268, "jiffies" },
	{ 0xf290cb8b, "sdio_get_host_pm_caps" },
	{ 0x343a1a8, "__list_add" },
	{ 0xfe769456, "unregister_netdevice_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x10c79f5c, "cfg80211_mgmt_tx_status" },
	{ 0x4d405db8, "param_ops_string" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x8017397b, "netif_rx" },
	{ 0x76c32458, "wakeup_source_prepare" },
	{ 0x63b87fc5, "__init_waitqueue_head" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0x1a0425fa, "mmc_wait_for_req" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5baaba0, "wait_for_completion" },
	{ 0xe777ad7b, "kernel_read" },
	{ 0xa27ad198, "sdio_writel" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xac84e060, "sunximmc_rescan_card" },
	{ 0x5f754e5a, "memset" },
	{ 0xb900762, "netif_rx_ni" },
	{ 0xa24a383a, "proc_mkdir" },
	{ 0xdb254c5c, "__ieee80211_get_channel" },
	{ 0x9b454dd9, "sw_mci_check_r1_ready" },
	{ 0xb86e4ab9, "random32" },
	{ 0x65d6d0f0, "gpio_direction_input" },
	{ 0xff31bca2, "cfg80211_get_bss" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x810ac6cf, "rfkill_alloc" },
	{ 0xdc798d37, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0x20c55ae0, "sscanf" },
	{ 0xa05142a3, "kthread_stop" },
	{ 0xb89af9bf, "srandom32" },
	{ 0x71c90087, "memcmp" },
	{ 0xba50bcdb, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x328a05f1, "strncpy" },
	{ 0xa8ce8d05, "register_netdev" },
	{ 0x60c0b56d, "mmc_set_data_timeout" },
	{ 0x3bd80db4, "sdio_readl" },
	{ 0x45c38182, "wireless_send_event" },
	{ 0x3cfedb3f, "register_pm_notifier" },
	{ 0x84b183ae, "strncmp" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xe5ba76fe, "skb_push" },
	{ 0xe16b893b, "mutex_lock" },
	{ 0x3ed85af2, "cfg80211_connect_result" },
	{ 0xaf14163, "dev_close" },
	{ 0x4c6ff041, "add_preempt_count" },
	{ 0x521445b, "list_del" },
	{ 0x8e1bf357, "cfg80211_michael_mic_failure" },
	{ 0x5a31b2c6, "wiphy_apply_custom_regulatory" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xcea899ea, "down" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x8834396c, "mod_timer" },
	{ 0xb3ba61c6, "platform_device_unregister" },
	{ 0xbe2c0274, "add_timer" },
	{ 0x27c02d91, "pid_task" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xbec86438, "platform_driver_register" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x8dc9c32, "skb_pull" },
	{ 0xea1943c0, "cfg80211_ibss_joined" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x957bd984, "dev_kfree_skb_any" },
	{ 0xbcf0d703, "__pm_relax" },
	{ 0xd79b5a02, "allow_signal" },
	{ 0x97608ee5, "dev_open" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x499fa379, "sdio_readsb" },
	{ 0xb7d030eb, "sdio_unregister_driver" },
	{ 0x80f8f53, "sdio_f0_writeb" },
	{ 0x43682c52, "sdio_set_host_pm_flags" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3ff62317, "local_bh_disable" },
	{ 0x9f984513, "strrchr" },
	{ 0xd1ad24e6, "kmem_cache_alloc" },
	{ 0x11f447ce, "__gpio_to_irq" },
	{ 0x5ece371, "cfg80211_roamed" },
	{ 0x67b9e73f, "cfg80211_put_bss" },
	{ 0xb37e9df0, "platform_device_register" },
	{ 0x9848520, "__alloc_skb" },
	{ 0xa273ef59, "wiphy_new" },
	{ 0x760b437a, "unregister_inetaddr_notifier" },
	{ 0x6c74fe85, "wiphy_register" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0xc2165d85, "__arm_iounmap" },
	{ 0xd0efcaa8, "cfg80211_ready_on_channel" },
	{ 0x799aca4, "local_bh_enable" },
	{ 0xbceb6dd1, "eth_type_trans" },
	{ 0x34a1a9fa, "create_proc_entry" },
	{ 0xee0ec934, "sdio_f0_readb" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xfdfaa3e4, "wake_up_process" },
	{ 0x3e445641, "cfg80211_disconnected" },
	{ 0x84c41780, "script_parser_fetch" },
	{ 0x7afa89fc, "vsnprintf" },
	{ 0x87f40363, "cfg80211_new_sta" },
	{ 0x1934fb0b, "sched_setscheduler" },
	{ 0xb9e52429, "__wake_up" },
	{ 0x64b22995, "sdio_memcpy_toio" },
	{ 0xd2965f6f, "kthread_should_stop" },
	{ 0xfe990052, "gpio_free" },
	{ 0x62457799, "sdio_writew" },
	{ 0xe374cc97, "find_get_pid" },
	{ 0xfe634f58, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9c55cec, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x9d669763, "memcpy" },
	{ 0x75a17bed, "prepare_to_wait" },
	{ 0x364b3fff, "up" },
	{ 0x6892088c, "unregister_pm_notifier" },
	{ 0x8893fa5d, "finish_wait" },
	{ 0x7e9ebb05, "kernel_thread" },
	{ 0xb6cc781d, "sdio_reset_comm" },
	{ 0xa14e0c0a, "cfg80211_remain_on_channel_expired" },
	{ 0x40a6f522, "__arm_ioremap" },
	{ 0x8e89e646, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x60f71cfa, "complete" },
	{ 0xb81960ca, "snprintf" },
	{ 0x9b7c8c75, "__netif_schedule" },
	{ 0x99bb8806, "memmove" },
	{ 0x3acc3dad, "sdio_readw" },
	{ 0x912751e, "sdio_register_driver" },
	{ 0x2ad2435a, "consume_skb" },
	{ 0xb4b56d83, "sdio_memcpy_fromio" },
	{ 0xa6b56e89, "sdio_claim_host" },
	{ 0x4a9906e7, "platform_driver_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x6597a870, "cfg80211_scan_done" },
	{ 0x5a4c2aea, "skb_put" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x80d817ab, "wait_for_completion_timeout" },
	{ 0x6d044c26, "param_ops_uint" },
	{ 0x13ac64c3, "dev_get_drvdata" },
	{ 0xc57877cd, "down_timeout" },
	{ 0xb722ed56, "sdio_set_block_size" },
	{ 0x21eed484, "wakeup_source_drop" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x4295844c, "wakeup_source_remove" },
	{ 0xdc43a9c8, "daemonize" },
	{ 0x922f986e, "sdio_disable_func" },
	{ 0xf20dabd8, "free_irq" },
	{ 0x8fbed205, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2c71454, "filp_open" },
	{ 0x3c106543, "alloc_etherdev_mqs" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("sdio:c*v02D0d0000*");
MODULE_ALIAS("sdio:c*v02D0d0492*");
MODULE_ALIAS("sdio:c*v02D0d0493*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4319*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0dA8E7*");
MODULE_ALIAS("sdio:c00v*d*");

MODULE_INFO(srcversion, "3A9B4C3F1FAC4B7202E8631");
