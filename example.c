#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "scline.h"

int main() {
	CmdLine* line = make_cmdline("<test> ", 4);
	
	char* l;
	while(1) {
		l = grabInputLine(line);
		printf("\n>%s\n", l);
		if (strcmp(l, "quit") == 0) {
			free(l);
			break;
		}
		free(l);
	}
	
	free_cmdline(line);
	return EXIT_SUCCESS;
}
