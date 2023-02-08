/*

* *
*
*
*
* * * *
*
*
*
*
*
* * * * * *

*/ 

#include <stdio.h>

int main()
{
    int i,j,n;
    
    printf("Enter a Number");
    scanf("%d",&n);
    
    for (i = 0; i <=n; i++) {
        if(i%2==0){
            for(j=0;j<i;j++){
                printf("* ");
            }
            printf("\n");
        }
        else{
            for ( j = 0; j <i; j++) {
                printf("*\n");
            }
        }
    }
}