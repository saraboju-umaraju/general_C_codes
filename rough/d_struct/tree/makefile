.PHONY : clean

VPATH = ./source/ : ./header/ ./object/

cc = gcc -Wall

INCLUDE = -I ./header/

OBJECT =  main.o intval_input.o insert.o delete.o preorder.o inorder.o postorder.o

BST : $(OBJECT)
		$(cc) $^ $(INCLUDE) -o $@

%.o : %.c
		$(cc) -c $^ $(INCLUDE)
		mv $@ ./object/

clean :
		-rm ./object/*.o all
	
