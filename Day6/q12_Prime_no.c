#include <stdio.h>

int main() 
{
    int num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    //For Loop
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            count++;
        }
    }
    if (count == 2) 
    {
        printf("%d is a prime number by for loop\n", num);
    } else 
    {
        printf("%d is not a prime number by for loop\n", num);
    }

    //While Loop
    count=0;
    i=1;
    while (i <= num) 
    {
        if (num % i == 0) 
        {
            count++;
        }
        i++;
    }
    if (count == 2) 
    {
        printf("%d is a prime number by while loop\n", num);
    } else 
    {
        printf("%d is not a prime number by while loop\n", num);
    }

    //DO-While Loop
    count=0;
    i=1;
    do
    {
        if (num % i == 0) 
        {
            count++;
        }
        i++;
    }while(i<=num);
    if (count == 2) 
    {
        printf("%d is a prime number by do-while loop\n", num);
    } else 
    {
        printf("%d is not a prime number by do-while loop\n", num);
    }
}
