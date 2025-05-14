CC      = gcc
CFLAGS  = -Wall -Wextra -std=c11 -D_POSIX_C_SOURCE=199309L -I tests

# Find all test source files and corresponding binaries
TEST_SRC := $(wildcard tests/test_*.c)
TEST_BIN := $(patsubst tests/test_%.c,test_%,$(TEST_SRC))

.PHONY: all clean

# Default target: build and run all tests
all: $(TEST_BIN)

# Compile each test source to its own binary and run it
test_%: tests/test_%.c
	$(CC) $(CFLAGS) $< -o $@
	./$@

# Remove all test binaries
clean:
	rm -f $(TEST_BIN)
