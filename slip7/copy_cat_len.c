//Write a program to copy, concatenate one string into another also fine its length

#include <stdio.h>
#include <string.h>

void main () {
	
	char str1[64], str2[64];
	int l, l2;
	printf("Enter 2 strings\n");
	scanf("%s%s", str1, str2);
	strcpy(str1, str2);
	printf("string After copying in str1: %s\n", str1);
	strcat(str1, str2);
	printf("string after concate str1: %s\n", str1); 
	l = strlen(str1);
	l2 = strlen(str2);
	printf("length of string str1: %d\nlength of string str2: %d\n", l, l2);
	
}

