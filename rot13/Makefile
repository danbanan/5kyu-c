CC := gcc
CFLAGS := -lcriterion
DEPS := rot.h
OBJ := test.o rot.o

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(DEPS)
	$(CC) -c $<

clean:
	rm $(OBJ) test
