//write a program to accept character and print its ASCII value?

#include <stdio.h>

void main () {
	char ch; 
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	printf("The ascii value of '%c' is %d", ch, ch);
	
}
