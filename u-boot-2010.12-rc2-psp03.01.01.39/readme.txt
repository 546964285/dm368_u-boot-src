$ source /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/set_env.sh

make -C /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/u-boot-2010.12-rc2-psp03.01.01.39/ CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- distclean

make -C /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/u-boot-2010.12-rc2-psp03.01.01.39/ CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- clean

make -C /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/u-boot-2010.12-rc2-psp03.01.01.39/ davinci_dm368leopard_config CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- RELFLAGS="-Wall -O2 -mcpu=arm926ej-s"

make -C /home/andy/RidgeRun-SDK-DM36x-Turrialba-Eval/u-boot-2010.12-rc2-psp03.01.01.39/ -j 8 CROSS_COMPILE=/opt/codesourcery/arm-2009q1/bin/arm-none-linux-gnueabi- CONFIG_SYS_TEXT_BASE="0x82000000" EXTRA_CPPFLAGS="-DCONFIG_SPLASH_ADDRESS="0x80800000" -DCONFIG_SPLASH_COMPOSITE=1 -DCONFIG_SYS_USE_NAND"

