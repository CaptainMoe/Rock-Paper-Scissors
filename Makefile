CC=gcc
CFLAGS = -Wall
DEPS = Draw.h Objects.h


Game: rps.c Draw.c Objects.c
	$(CC) $(CFLAGS) -o rps rps.c Draw.c Objects.c

Debugger:
	lldb rps

clean:
	rm *.o
