OBJECTS = test.o e_string.o

test.out: $(OBJECTS)
	gcc $(OBJECTS) -o test.out

test.o: test.c

e_string.o: e_string.h