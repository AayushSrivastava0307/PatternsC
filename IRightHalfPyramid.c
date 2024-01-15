// C program to print the inverted right half pyramid of char
#include <stdio.h>

int main()
{
	int rows=5;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);
    // first loop to print all rows
	for (int i = 0; i < rows; i++) {

		// first inner loop to print the char in each row
		for (int j = 0; j < rows - i; j++) {
			printf("%c ",c);
		}
		printf("\n");
	}
}
