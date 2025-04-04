#include <stdio.h>

int main() 
{
    int i,j,k,n=1;
   
    for ( i =1; i <=4; i++) 
    {
      
        for ( j = i; j <=4; j++)  
        {
            printf("  ");
        }
       
        for ( k = n; k >=1; k--)      
        {
            printf("%c ",k+64);
        } 
        printf("\n");
        n+=2;
    }
}
