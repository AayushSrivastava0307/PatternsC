// c program to print left half pyramid pattern of char
#include <stdio.h>

int main()
{
	int rows;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);

	// first loop is for printing the rows
	for (int i = 0; i < rows; i++) {

		// loop for printing leading whitespaces
		for (int j = 0; j < 2 * (rows - i)-2; j++) {
			printf(" ");
		}

		// loop for printing character
		for (int k = 0; k <= i; k++) {
			printf("%c ",c);
		}
		printf("\n");
	}
	return 0;
}
