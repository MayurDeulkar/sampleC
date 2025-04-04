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
       
        for( m=n; m >=1; m--)
        {
            printf("%d ",m);
        }
        n++;
       for ( k = 1; k <=n; k++)      
        {
            printf("%c ",k+47);
        } 

        printf("\n");
        
    }
}
