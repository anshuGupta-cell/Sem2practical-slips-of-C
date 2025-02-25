// Write using structure to calculate area and perimeter of circumference of circle.


#include <stdio.h>

typedef struct {
	float r, area, peri;
	
}Circle;

void main () {
	Circle c;
	printf("Enter radius of circle: ");
	scanf("%f", &c.r);
	c.area = 3.142 * c.r * c.r;
	c.peri = 2 * 3.142 * c.r;
	
	printf("Area: %.2f\n", c.area);
	printf("Perimeter: %.2f", c.peri);
	

}
