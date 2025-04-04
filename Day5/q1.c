#include<stdio.h>

int main()
{
    float cent=0,inch=0,n=0;

    printf("Enter the Centimeters: ");

        scanf("%f",&cent);
        inch = cent* 0.3937;
        n = inch;
        n++;
        printf("\n %.2f cemtimeter is corresponding to %.4f inches",cent,n);
    
    
}