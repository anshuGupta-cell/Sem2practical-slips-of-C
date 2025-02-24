// Write a program in 'C' for finding largest of 2 numbers using a macro.

#include <stdio.h>

#define MAX(x, y) (x > y)?x:y

void main (){
	int a, b, c;
	printf("Enter two nos:\n");
	scanf("%d%d", &a, &b);
	c = MAX(a, b);
	printf("The max is %d", c);
}


