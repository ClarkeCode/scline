

all: keybytes main

main: main.c scline.c scline.h
	gcc scline.c main.c -Wall -Wextra -o main

keybytes: keybytes.c
	gcc keybytes.c -Wall -Wextra -o keybytes

clean:
	rm -f *.out keybytes main
