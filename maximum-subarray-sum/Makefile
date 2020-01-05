CC := gcc
CFLAGS := -lcriterion
OBJ := test.o maxsequence.o
DEPS := maxsequence.h

test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(DEPS)
	$(CC) -c $<
