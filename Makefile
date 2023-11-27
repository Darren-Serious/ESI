TOP_DIR=$(shell pwd)
SDK_VERSION=v0.1
HOSTCC=aarch64-linux-gnu-gcc
HOSTCXX=aarch64-linux-gnu-g++
export HOSTCC HOSTCXX

KCONFIG_FILE_PATH=$(TOP_DIR)/Kconfig
KCONFIG_SRC_PATH=$(TOP_DIR)/scripts/kconfig
export TOP_DIR  SDK_VERSION KCONFIG_FILE_PATH KCONFIG_SRC_PATH

#export vars in .config
config_cmd := menuconfig %_defconfig
ifeq ($(filter $(config_cmd), $(MAKECMDGOALS)),)
include $(TOP_DIR)/.config
CONFIG_EXPORT_VARS=$(patsubst %=y, %,$(filter %=y, $(shell cat $(TOP_DIR)/.config)))
export $(CONFIG_EXPORT_VARS)
endif

all:
	@echo $@

$(TOP_DIR)/scripts/kconfig/%onf:
	$(MAKE) CC=$(HOSTCC) HOSTCC=$(HOSTCC) -C $(KCONFIG_SRC_PATH) -f Makefile.host  $(MAKECMDGOALS)

menuconfig:$(TOP_DIR)/scripts/kconfig/mconf
	$< $(KCONFIG_FILE_PATH)

%_defconfig:$(TOP_DIR)/scripts/kconfig/conf
	$< --defconfig=$(TOP_DIR)/configs/$@  $(KCONFIG_FILE_PATH)
.PHONY:menuconfig clean

clean:
	@echo $@
	rm $(TOP_DIR)/scripts/kconfig/mconf
