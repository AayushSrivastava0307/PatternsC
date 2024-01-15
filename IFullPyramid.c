// C program to print the inverted full pyramid pattern of
// char
#include <stdio.h>

int main()
{
	int rows = 5;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);


	// first loop for printing all rows
	for (int i = 0; i < rows; i++) {

		// first inner loop for printing leading white
		// spaces
		for (int j = 0; j < 2 * i; j++) {
			printf(" ");
		}

		// second inner loop for printing char
		for (int k = 0; k < 2 * (rows - i) - 1; k++) {
			printf("%c ",c);
		}
		printf("\n");
	}
}
