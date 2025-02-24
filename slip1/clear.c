// read mode and print it
#include <stdio.h>

void main () {
	FILE *file;
	char ch;
	file = fopen("clear.c", "r");
	if(file == NULL){
		printf("unable to open clear.c");
	}else {
		do {
			ch = fgetc(file);
			putchar(ch);
			
		}while(ch != EOF);
		fclose(file);
	}
	
}
