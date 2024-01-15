// C Program to print the rhombus pattern using char
#include <stdio.h>

int main()
{
	int rows = 5;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);

	// first outer loop to iterate through each row
	for (int i = 0; i < rows; i++) {

		// first inner loop to print white spaces
		for (int j = 0; j < rows - i - 1; j++) {
			printf(" ");
		}

		// second inner loop to print char in each row
		for (int k = 0; k < rows; k++) {
			printf("%c ",c);
		}
		printf("\n");
	}
	return 0;
}
