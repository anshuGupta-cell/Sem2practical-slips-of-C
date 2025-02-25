// write a program to copy one string into another.

#include <stdio.h>
#include<string.h>

void main () {
	char str1[64], str2[64];
	
	printf("Enter 2 strings\n");
	scanf("%s%s", str1, str2);
	
	strcpy(str1, str2);
	
	printf("The string after 'strcpy': %s", str1);

}
