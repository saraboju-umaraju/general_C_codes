VPATH = ../header/ 
OBJ =  d_l.o d_disp.o d_rem_val.o id_value.o dd_end.o d_in_poss.o d_r_disp.o id_end.o dd_head.o d_in_val.o d_rem_pos.c id_head.o

umaa: $(OBJ)
	gcc $^ -o $@

%.o: %.c
	gcc -c $^ -I ../header/

clean:
	rm *.o umaa
