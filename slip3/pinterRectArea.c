//Write a program in C to calculate area of rectangle.

#include <stdio.h>
#include <stdlib.h>


void main () {
	float *l, *b, *area;
	l = (float *) malloc(sizeof(float));
	b = (float *) malloc(sizeof(float));
	area = (float *) malloc(sizeof(float));
	printf("Enter length and bredth of rectangle\n");
	scanf("%f%f", l, b);
	*area = (*l) * (*b);
	printf("area of reactangle is %.4f", *area);
}
