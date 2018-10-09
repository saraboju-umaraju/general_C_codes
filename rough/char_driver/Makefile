#obj-m:=ex05_exporting_symbol.o
#obj-m:=ex05_using_symbol.o
obj-m:=three.o

KDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	@rm -f Module.symvers app_kmod
