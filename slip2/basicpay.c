/*Accept basic pay, dearness allowance, travelence allowance of n empolyee
and calculate the salary of employee.
DA IS 35% of basic pay.
TA is 15% of basic pay.
HRA is 20% of basic pay.
Calculate Net Salary, display all information.*/

#include <stdio.h>

typedef struct {
	char name[64];
	double da, ta, hra, basic_pay, salary;
}Emp;

void main () {
	int n; 
	printf("Enter no of employees: ");
	scanf("%d", &n);
	Emp e[n];
	
	for (int i = 0; i < n; i++){
		printf("Enter name: ");
		scanf("%s", e[i].name);
		printf("enter basic pay: ");
		scanf("%lf", &e[i].basic_pay);
		
		e[i].da = e[i].basic_pay * 0.35;
		e[i].ta = e[i].basic_pay * 0.15;
		e[i].hra = e[i].basic_pay * 0.20;
		e[i].salary = e[i].basic_pay + e[i].hra + e[i].ta + e[i].da;
		
	}
	printf("Name\tBasic pay\tDa\tTa\tHra\tsalary\n");
	
	for (int i = 0; i < n; i++){
		printf("%s\t%.2lf\t%.2lf\t%.2lf\t%.2lf\t%.2lf\n", e[i].name, e[i].basic_pay, e[i].da, e[i].ta, e[i].hra, e[i].salary);
	}
	
	
}












