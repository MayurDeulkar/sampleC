#include <stdio.h>
#include <conio.h>
int main() 
{

    int input,a;
    printf("Enter the number:");
    scanf("%d",&input);

    for(int i = 1; i < input; i++) 
    {
        if(i%2 == 0)
        {
            a=i*i;
            printf("\n %d Sqaure is: %d",i,a);
        }
    }
}