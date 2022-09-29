//https://viewsourcecode.org/snaptoken/kilo/02.enteringRawMode.html
#include <unistd.h> //read(), STDIN_FILENO
#include <termios.h>
#include <stdlib.h> //atexit()

#include <stdio.h>
#include <ctype.h>

struct termios orig_termios;

void disableRawMode() {
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

void enableRawMode() {
	tcgetattr(STDIN_FILENO, &orig_termios);
	atexit(disableRawMode);
	
	struct termios raw = orig_termios;
	raw.c_lflag &= ~(ECHO | ICANON);
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

int main() {
	printf("Press Ctrl + C to stop\n");
	enableRawMode();

	char c;
	while (read(STDIN_FILENO, &c, 1) == 1) {
		if (iscntrl(c))
			printf("%d\n", c);
		else
			printf("%d ('%c')\n", c, c);
	}
	return 0;
}
