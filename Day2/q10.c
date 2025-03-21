#include<stdio.h>
#include<conio.h>
int main()
{
    int amt,amt2,a,b,c;
    printf("Enter your amount: ");
    scanf("%d",&amt);

    a= amt/50;
    printf("Amount in 50 Notes: %d",a);

    b=amt%50;
    amt2=b/10;
    printf("\n Amount in 10 notes:%d",amt2);

    c=amt%10;
    amt=c/5;
    printf("\n Amount in 5 notes:%d",amt);
}