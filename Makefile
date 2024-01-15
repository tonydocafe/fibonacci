CC = gcc
CFLAGS = -Wall

all: programa

programa: main.o fib.o
	$(CC) $(CFLAGS) -o $@ $^

main.o: main.c fib.h
	$(CC) $(CFLAGS) -c $<

fib.o: fib.c fib.h
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o programa
