// write a program to calculate average marks of the students, where student has three subjects.

#include <stdio.h>

typedef struct{
	char name[64];
	int rollNo;
	float m1, m2, m3, avg;
	
}Student;

void main () {
	int n; 
	printf("enter how many students: ");
	scanf("%d", &n);
	Student s[n];
	for (int i = 0; i < n; i++){
		printf("enter name: ");
		scanf("%s", s[i].name);
		printf("enter rollno: ");
		scanf("%d", &s[i].rollNo);
		printf("enter marks in 3 subjects\n");
		scanf("%f %f %f", &s[i].m1, &s[i].m2, &s[i].m3);
		s[i].avg = (s[i].m1 + s[i].m2 + s[i].m3 ) / 3;
	}
	printf("Name\tRoll\tmar1\tma2\tma3\tavg\n");
	for (int i = 0; i < n; i++){
		printf("%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n", s[i].name, s[i].rollNo, s[i].m1, s[i].m2, s[i].m3, s[i].avg);
	}
	
}
