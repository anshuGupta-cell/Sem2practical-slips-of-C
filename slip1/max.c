// max bet 2 nos pointer

#include <stdio.h>
#include <stdlib.h>


void main () {
	int *a, *b;
	
	a = (int *) malloc (sizeof(int));
	b = (int *) malloc (sizeof(int));
	
	printf("Enter 2 nos:\n");
	scanf("%d%d", a, b);
	
	if (a > b) {
		printf("%d is gearter", *a);
	} else {
		printf("%d is gearter", *b);
	}
}
