CC := gcc
CFLAGS := -lcriterion
TEST_DEPS := test.h
TEST_OBJ := arrayTestSuite.o arrayTestFunctions.o

arrayTest: $(TEST_OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.c $(TEST_DEPS)
	$(CC) -c $<

# %.o $(DEPS)
# test: test.c
# 	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o arrayTest
