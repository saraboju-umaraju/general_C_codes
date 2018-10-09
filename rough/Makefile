


.aa:
	echo .aa
a:
	@echo hello



.RECIPEPREFIX=x

valid: validation.o main.o str_len.o 
	gcc -ggdb  validation.o main.o str_len.o -o valid

validation.o : validation.c
	gcc -c validation.c 

main.o : main.c
	gcc -c main.c

str_len.o : str_len.c
	gcc -c str_len.c

clean:
	rm *.o
