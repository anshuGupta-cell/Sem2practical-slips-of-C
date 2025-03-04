//write a program to accept item no add quantity of five items from the user and store it into the file?

#include <stdio.h>

typedef struct{
	int id, qty;
}Item;

void main () {
	Item it[5];
	FILE *file;
	char ch;
	
	
	file = fopen("item.txt", "w");
	if (!file) printf("Unable to open file item.txt");
	else {
	
		for(int i = 0; i < 5; i++){
		
			printf("\nEnter item id: ");
			
			scanf("%d", &it[i].id);
			printf("Enter Quantity: ");
			scanf("%d", &it[i].qty);
			fprintf(file, "\nItem id: %d\nItem quantity: %d\n", it[i].id, it[i].qty);
		}
		fclose(file);
		
		
		printf("\nRecords added successfully");
	}
	file = fopen("item.txt", "r");
	if (!file) printf("Unable to open file item.txt");
	else {
		do{
			ch = fgetc(file);
			putchar(ch);
		}while (ch != EOF);
		fclose(file);
		
		
		printf("\nRecords READ successfully");
	}
	
}


