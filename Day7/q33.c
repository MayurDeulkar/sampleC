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
       
        for ( k = 1; k <=n; k++)      
        {
            printf("%d ",k);
        } 
        printf("\n");
        n+=2;
    }
}
