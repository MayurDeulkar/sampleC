#include<stdio.h>
#include<conio.h>
int main()
{
    int r;
    printf("Enter the Intergers:");
    scanf("%d",&r);

    if(r>0 && r<80)
    {
        printf("%d Number is in range and not negative",r);
    }
    else
    {
        printf("\nError: Number is negative or Greater than 80");
    }
}