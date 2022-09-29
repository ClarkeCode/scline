

all: keybytes example

example: example.c scline.c scline.h
	gcc scline.c example.c -Wall -Wextra -o example

keybytes: keybytes.c
	gcc keybytes.c -Wall -Wextra -o keybytes

clean:
	rm -f *.out keybytes example
