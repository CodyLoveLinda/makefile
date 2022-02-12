CC = gcc
CFLAGS = -g -O  -Wall
 
main:add.o sub.o main.o 
	$(CC) $^ -o $@
%.o:%.c
	$(CC) $(CFLAGS) -c $^
clean:
	rm -rf main main.o add.o sub.o
