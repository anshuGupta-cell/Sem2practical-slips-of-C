//write a program to open any file in read mode and print it.

#include <stdio.h>

void main () {
	
	FILE *file;
	char ch;
	
	file = fopen("file_read.c", "r");
	
	if(!file) printf("Unable to open file_read.c");
	else {
		do {
			ch = fgetc(file);
			printf("%c", ch);
			
		}while( ch != EOF);
		fclose(file);
	}	
	
	
}
