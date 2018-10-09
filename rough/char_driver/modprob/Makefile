obj-m:=one.o
obj-m+=two.o
obj-m+=three.o
obj-m+=four.o

KDIR:=/lib/modules/$(shell uname -r)/build

PWD:=$(shell pwd)

EXTRA_CFLAGS= -w

all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

c:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
