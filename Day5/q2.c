#include<stdio.h>
#include<math.h>

int main()
{
    float principal,rate,si=0,time;

    printf("Enter the Principal, Rate of Interest, Time:");
    scanf("%f,%f,%f",&principal,&rate,&time);

    si =(principal*rate*time)/100;

    printf("Simple Interest is: %.2f",si);
}