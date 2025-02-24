//write a program to accept two strings and concatenate them.
#include<stdio.h>
#include<string.h>

void main () {
	char str1[64], str2[64];
	printf("Enter two strings\n");
	scanf("%s %s", str1, str2);
	strcat(str1, str2);
	printf("string after concate %s", str1);
}
