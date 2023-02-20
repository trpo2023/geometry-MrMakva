all: geom
main: geom.c
	gcc -Wall -Werror -o geom geom.c
run:
	./geom
