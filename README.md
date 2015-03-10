ap6210 [WIP: Not Functional Yet]
======

Fork from Eddy's Wifi and Bluetooth driver for CubieTruck.

Target to extend the driver a bit to support some A10 (sunxi-4i) based customized board.




### How to patch and load

This patch should be applied to the root of the linux-sunxi kernel's source :

    # patch -p1 < ap6210_defconfig.patch
    # patch -p1 < ap6210_module.patch

To load the module, add the following line to /etc/modules :

    ap6210

And there is dependancy on `gpio_sunxi` module.

If you want to load modules in runtime, please use (assuming gpio_sunxi already loaded anyway):

	# modprobe ap6210

Feel free to improve the code and submit bugfix...

### Note

1. Depends on the clock solution, if 'ap6xxx_lpo' is not defined in script.bin, then lpo config will be ignored in driver, supposing the clock is handled by external independant design;


