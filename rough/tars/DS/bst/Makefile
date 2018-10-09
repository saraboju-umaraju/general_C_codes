OBJECT = main.o delete.o min.o max.o insert.o post.o pre.o in.o  

uma: $(OBJECT)
	gcc $^ -o $@

%.o:%.c
	gcc -c $^

clean:
	rm *.o uma
