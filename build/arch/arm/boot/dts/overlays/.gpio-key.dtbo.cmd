cmd_arch/arm/boot/dts/overlays/gpio-key.dtbo := mkdir -p arch/arm/boot/dts/overlays/ ; arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/overlays/.gpio-key.dtbo.d.pre.tmp -nostdinc -I../arch/arm/boot/dts -I../arch/arm/boot/dts/include -I../drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/overlays/.gpio-key.dtbo.dts.tmp ../arch/arm/boot/dts/overlays/gpio-key-overlay.dts ; ./scripts/dtc/dtc -@ -H epapr -O dtb -o arch/arm/boot/dts/overlays/gpio-key.dtbo -b 0 -i ../arch/arm/boot/dts/overlays/ -Wno-unit_address_vs_reg -d arch/arm/boot/dts/overlays/.gpio-key.dtbo.d.dtc.tmp arch/arm/boot/dts/overlays/.gpio-key.dtbo.dts.tmp ; cat arch/arm/boot/dts/overlays/.gpio-key.dtbo.d.pre.tmp arch/arm/boot/dts/overlays/.gpio-key.dtbo.d.dtc.tmp > arch/arm/boot/dts/overlays/.gpio-key.dtbo.d

source_arch/arm/boot/dts/overlays/gpio-key.dtbo := ../arch/arm/boot/dts/overlays/gpio-key-overlay.dts

deps_arch/arm/boot/dts/overlays/gpio-key.dtbo := \

arch/arm/boot/dts/overlays/gpio-key.dtbo: $(deps_arch/arm/boot/dts/overlays/gpio-key.dtbo)

$(deps_arch/arm/boot/dts/overlays/gpio-key.dtbo):
