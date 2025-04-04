#include <stdio.h>

int main() 
{
    for (int i =0; i <=4; i++) 
    {
            
        for (int j = i; j <=4; j++)  
        {
            printf(" ");
        }
       
        for (int k = 1; k <=i; k++)      
        {
            printf("%c ",i+64);
        }
            
        printf("\n");
    }
}
