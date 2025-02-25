// write a program to accept the string and find out its length.

#include <stdio.h>
#include<string.h>

void main () {
	char str[64];
	printf("Enter a string: ");
	scanf("%s", str);
	int length = strlen(str);
	printf("the length of '%s' is: %d", str, length);
}
