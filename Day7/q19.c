#include <stdio.h>

int main() 
{
    int i,j;

    for (i=1; i <= 3; i++) 
    {

        for (j = i; j < 3; j++) 
        {
            printf("  ");
        }

        for (j = 1; j <= i; j++) 
        {
            printf("* ");
        }

        printf("\n");
    }  
}