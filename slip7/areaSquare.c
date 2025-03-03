// write using structure to calculate area and perimeter square.
#include <stdio.h>

typedef struct {
	float side, area, peri;
}Square;

void main () {
	Square s;
	
	printf("Enter side of square: ");
	scanf("%f", &s.side);
	
	s.area = s.side * s.side;
	s.peri = 4 * s.side;
	printf("Area: %.2f", s.area);
	printf("\nPerimeter: %.2f", s.peri);

}
