// capital lower alphabet digit special vowel

#include <stdio.h>
#include <ctype.h>

void main () {
	char ch;
	printf("Enter a character: ");
	ch = getchar();
	
	if(isalpha(ch)){
		printf("%c is a alphbet\n", ch);
		if(islower(ch)){
			printf("%c is a lower case\n", ch);
		} else {
			printf("%c is a upper case\n", ch);
		}
		if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U'){
			printf("%c is a vowel\n", ch);
		}
	} else if(isdigit(ch)){
		printf("%c is a digit\n", ch);
	} else {
		printf("%c is a special char\n", ch);
	}
}
