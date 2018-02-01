$ source set_env.sh

make -C u-boot-2010.12-rc2-psp03.01.01.39/ CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- distclean

make -C u-boot-2010.12-rc2-psp03.01.01.39/ CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- clean

make -C u-boot-2010.12-rc2-psp03.01.01.39/ davinci_dm368leopard_config CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- RELFLAGS="-Wall -O2 -mcpu=arm926ej-s"

make -C u-boot-2010.12-rc2-psp03.01.01.39/ -j 8 CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- CONFIG_SYS_TEXT_BASE="0x82000000" EXTRA_CPPFLAGS="-DCONFIG_SPLASH_ADDRESS="0x80800000" -DCONFIG_SPLASH_COMPOSITE=1 -DCONFIG_SYS_USE_NAND"



mono /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/bootloader/u-boot-2010.12-rc2-psp03.01.01.39/ti-flash-utils/src/DM36x/GNU/bc_DM36x.exe -uboot -pageSize 2048 -blockNum 25 -startAddr 0x82000000 -loadAddr 0x82000000 u-boot-2010.12-rc2-psp03.01.01.39/u-boot.bin -o bootloader.nandbin

setenv ipaddr 192.168.4.100
setenv serverip 192.168.4.101
tftp 0x80700000 bootloader.nandbin
nand erase 0x320000 0x60000
nand write.ubl 0x80700000 0x320000 0x60000
reset


sudo /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/bootloader/u-boot-2010.12-rc2-psp03.01.01.39/src/tools/uflash/uflash -d /dev/sdx -u ubl_DM36x_sdmmc.bin -b u-boot.bin -e 0x82000000 -l 0x82000000



