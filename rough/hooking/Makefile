obj-m:=ip_denial.o

KDIR:=/lib/modules/$(shell uname -r)/build
PWD:=$(shell pwd)

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	@rm -f Module.symvers app_kmod
	rmmod ip_denial

t:
	make clean ; make ; dmesg -C ; insmod ip_denial.ko ; sleep 1 ; dmesg
