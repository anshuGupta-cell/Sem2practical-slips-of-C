// Write a program in C to add two numbers using pointers.

#include <stdio.h>
#include<stdlib.h>

void main () {
	int *a, *b;
	a = (int *) malloc(sizeof(int));
	b = (int *) malloc(sizeof(int));
	printf("Enter two nos\n");
	scanf("%d%d", a, b);
	printf("addtion is: %d\n", (*a + *b));
	
	
}
