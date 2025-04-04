#include <stdio.h>

int main() 
{
    int i,j,k,a=51,n=7;
   
    for ( i =4; i >=1; i--) 
    {
      
        for ( j = i; j <=4; j++)  
        {
            printf("  ");
        }
       
        for ( k = 1; k <=n; k++)      
        {
            printf("%c ",i+a);
        } 
        printf("\n");
        n-=2;
        a-=1;

    }
}
