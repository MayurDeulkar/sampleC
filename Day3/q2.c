#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    int sum;
    
    printf("Enter the Three Values: ");
    scanf("%f,%f,%f",&a,&b,&c);
    sum = a+b+c;

    printf("\n Perimter of the Triangle:%d",sum);
    if(sum == 180)
    {
        printf("\n Values are valid");
        printf("\n Values makes a triangle");
    }
    else 
    {
        printf("\n Values are Invalid");
        printf("\n Values not make a triangle");
    }
}