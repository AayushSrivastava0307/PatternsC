// C program to print right half pyramid pattern of char
#include <stdio.h>

int main()
{
	int rows=5;
	char c;
	printf("Enter pattern character:");
	scanf("%c",&c);
	// first loop for printing rows
	for (int i = 0; i < rows; i++) {

		// second loop for printing character in each rows
		for (int j = 0; j <= i; j++) {
			printf("%c ",c);
		}
		printf("\n");
	}
	return 0;
}
