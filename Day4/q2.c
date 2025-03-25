#include<stdio.h>

int main()
{
    int pass,a;

    printf("Enter the Password:");
    scanf("%d",&pass);

    a=1234;
    if(pass == a)
    {
        printf("Correct password");
    }
    else
    {
        printf("Incorrect Password");
    }
}