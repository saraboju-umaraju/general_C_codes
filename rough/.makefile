
CFLAGS= -Wall -g 
#LDLIBS= -lm
test: math.o
	gcc -o math math.o

math.o:math.c
	gcc -c math.c
