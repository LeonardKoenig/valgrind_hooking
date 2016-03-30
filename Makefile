CC=gcc
WARNINGS = -Wall -Wpedantic
WARNPLUS = -Wextra -Wshadow -Wconversion
WARNINGS += ${WARNPLUS} -Wno-sign-compare

CFLAGS=-I/usr/include/valgrind ${WARNINGS}

all:
	$(CC) -shared -fPIC -o hook.so $(CFLAGS) hook.c
	$(CC) -o prog $(CFLAGS) prog.c

test: all
	@LD_PRELOAD=$(PWD)/hook.so valgrind -q ./prog > /tmp/test_output.txt
	diff test_output.txt /tmp/test_output.txt
