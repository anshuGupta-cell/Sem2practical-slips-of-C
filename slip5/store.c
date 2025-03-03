//write a program to accept item no add quantity of five items from the user and store it into the file?

#include <stdio.h>

typedef struct{
	int id, qty;
}Item;

void main () {
	Item it[5];
	FILE *file;
	
	file = fopen("item.dat", "w");
	if (!file) printf("Unable to open file item.dat");
	else {
		for(int i = 0; i < 1; i++){
		printf("Enter item id: ");
		scanf("%d", &it->id);
		printf("Enter Quantity: ");
		scanf("%d", &it->qty);
		fwrite(&it, sizeof(it), 1, file);
		}
		fclose(file);
		printf("\nRecords added successfully");
	}
}


