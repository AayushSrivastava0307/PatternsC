// C program to print the full pyramid pattern of char
#include <stdio.h>

int main()
{
	int rows = 5;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);


	// first loop to print all rows
	for (int i = 0; i <rows; i++) {

		// inner loop 1 to print white spaces
		for (int j = 0; j <2 * (rows - i) - 2; j++) {
			printf(" ");
		}

		// inner loop 2 to print  character
		for (int k = 0; k < 2 * i + 1; k++) {
			printf("%c ",c);
		}
		printf("\n");
	}
	return 0;
}
