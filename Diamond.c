// C Program to print diamond pattern using char
#include <stdio.h>
int main()
{
	int n = 5;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);


	// first outer loop to iterate through each row
	for (int i = 0; i < 2 * n - 1; i++) {

		// assigning values to the comparator according to
		// the row number
		int comp;
		if (i < n) {
			comp = 2 * (n - i) - 1;
		}
		else {
			comp = 2 * (i - n + 1) + 1;
		}

		// first inner loop to print leading whitespaces
		for (int j = 0; j < comp; j++) {
			printf(" ");
		}

		// second inner loop to print char
		for (int k = 0; k < 2 * n - comp; k++) {
			printf("%c ",c);
		}
		printf("\n");
	}
	return 0;
}
