cmd_arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb := mkdir -p arch/arm/boot/dts/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.d.pre.tmp -nostdinc -I../arch/arm/boot/dts -I../arch/arm/boot/dts/include -I../drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.dts.tmp ../arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb -b 0 -i ../arch/arm/boot/dts/ -@ -H epapr -Wno-unit_address_vs_reg -d arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.d.dtc.tmp arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.dts.tmp ; cat arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.d.pre.tmp arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.d.dtc.tmp > arch/arm/boot/dts/.bcm2710-rpi-3-b-plus.dtb.d

source_arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb := ../arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dts

deps_arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb := \
  ../arch/arm/boot/dts/bcm2710.dtsi \
  ../arch/arm/boot/dts/bcm283x.dtsi \
  ../arch/arm/boot/dts/include/dt-bindings/pinctrl/bcm2835.h \
  ../arch/arm/boot/dts/include/dt-bindings/clock/bcm2835.h \
  ../arch/arm/boot/dts/include/dt-bindings/clock/bcm2835-aux.h \
  ../arch/arm/boot/dts/include/dt-bindings/gpio/gpio.h \
  ../arch/arm/boot/dts/bcm270x.dtsi \
  ../arch/arm/boot/dts/include/dt-bindings/power/raspberrypi-power.h \
  ../arch/arm/boot/dts/bcm2708-rpi.dtsi \
  ../arch/arm/boot/dts/bcm283x-rpi-lan7515.dtsi \

arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb: $(deps_arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb)

$(deps_arch/arm/boot/dts/bcm2710-rpi-3-b-plus.dtb):
