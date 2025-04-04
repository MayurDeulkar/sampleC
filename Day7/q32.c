#include <stdio.h>

int main() 
{
    int a=1;
    for (int i =1; i <=4; i++) 
    { 
        for (int j = i; j <=4; j++)  
        {
            printf(" ");
        }
        for (int k = 1; k <=i; k++)      
        {
            printf("%c ",a+64);
        }   

        printf("\n");
     a+=2;
    }
      
}
