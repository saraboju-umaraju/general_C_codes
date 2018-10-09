VPATH = ./SOURCE/ : ./OBJ/ : ./HEAD/
INCLUDE = -I ./HEAD/
cc = gcc
object = a_afterpos.o a_afterval.o a_b4pos.o a_beforeval.o a_begin.o a_end.o a_middle.o a_penlatiment.o a_pos.o charval.o d_afterval.o d_begin.o delete.o d_end.o display.o d_middle.o d_penaltiment.o d_pos.o insert.o intval.o main.o d_beforeval.o

exe: $(object) 
	$(cc) *.o -o $@
	mv *.o ./OBJ/


%.o : %.c 
	$(cc) -c $^ $(INCLUDE)



clean:
	rm *.o exe
