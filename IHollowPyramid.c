#include <stdio.h>
int main()
{
    int i = 0,j = 0;
    int rows = 5;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);

    for(i=1; i<=rows; ++i)
    {
        // Print spaces
        for(j=1; j<=i; ++j)
        {
            printf(" ");
        }
        // Print star/
        for(j =1; j <=((rows*2)-((2*i)-1)); ++j)
        {
            if(i==1 || j==1 || j==((rows*2)-((2*i)-1)))
            {
                printf("%c",c);
            }
            else
            {
                printf(" ");
            }
        }
        // Print new line
        printf("\n");
    }
    return 0;
}