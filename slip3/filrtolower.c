// write a program to change all uppercase letters of the file in to lower case?

#include <stdio.h>
#include <ctype.h>

void main () {
	FILE *file1, *file2;
	char fn1[64], fn2[64], ch;
	printf("enter name of first file: ");
	scanf("%s", fn1);
	printf("enter name of second file: ");
	scanf("%s", fn2);
	file1 = fopen(fn1, "r");
	file2 = fopen(fn2, "w");
	if(!file1){
		printf("Unable to open %s", fn1);
	}
	if(!file2){
		printf("Unable to open %s", fn2);
	} else {
		do {
			ch = fgetc(file1); 
			ch = tolower(ch);
			fputc(ch, file2);
		}while(ch != EOF);
		fclose(file1);
		fclose(file2);
		file2 = fopen(fn2, "r");  // Reopen file2 for reading
    	if (!file2) {
       		printf("Unable to open %s for reading.\n", fn2);
       	}
		printf("\nThe content of file %s\n", fn2);
		while ((ch = fgetc(file2)) != EOF) {
        		putchar(ch); 
    		}
		fclose(file2);
	}
}


