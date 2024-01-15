#include<stdio.h>
 
int main(){
    int side=5, i, j;
    char c;
    printf("Enter pattern character:");
	scanf("%c",&c);
    /* Row iterator for loop */
    for(i = 0; i < side; i++){
     /* Column iterator for loop */
        for(j = 0; j < side; j++){
            /* Check if currely position is a boundary position */
            if(i==0 || i==side-1 || j==0 || j==side-1)
                printf("%c",c);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}