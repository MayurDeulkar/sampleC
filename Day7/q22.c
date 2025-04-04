#include <stdio.h>

int main() 
{
    char a[5]={'A','B','C'};
    for (int i = 0; i <=3; i++) 
    {
      
        for (int j = i; j <=3; j++)  
        {
            printf(" ");
        }
       
        for (int k = 0; k <=i; k++)      
        {
            printf("%c ",a[i]);
        }
            
        printf("\n");
    }
}
