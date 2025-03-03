//C Program to Store Information of Students Using Structure

#include <stdio.h>

typedef struct {
	char name[64];
	char class[10];
	char rollNo;
	
}Student;

void main () {

	int n;
	printf("Enter how many student: ");
	scanf("%d", &n);
	Student s[n];
	for (int i = 0; i < n; i++){
		printf("Enter name: ");
		scanf("%s", s[i].name);
		printf("Enter class: ");
		scanf("%s", s[i].class);
		printf("Enter roll no: ");
		scanf("%s", &s[i].rollNo);
		
	}
	printf("Name\tclass\tRoll no\n");
	
	for (int i = 0; i < n; i++){
		printf("%s\t%s\t%d\n", s[i].name, s[i].class, s[i].rollNo);
	}
	
}
