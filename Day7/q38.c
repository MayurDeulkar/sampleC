#include <stdio.h>

int main() 
{
    int i,j,k,m,n=0;
   
    for ( i =1; i <=4; i++) 
    {
      
        for ( j = i; j <=4; j++)  
        {
            printf("  ");
        }
       
        for( m=1; m <=n; m++)
        {
            printf("%c ",m+64);
        }
        n++;
       for ( k = n; k >=1; k--)      
        {
            printf("%c ",k+64);
        } 

        printf("\n");
        
    }
}
