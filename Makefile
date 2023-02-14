all: main
myprog: main.c
	gсс -Wall -Werror -o main main.c
run:
	./main
