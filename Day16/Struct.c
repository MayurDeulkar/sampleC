#include<stdio.h>

struct distance
{
    int feet;
    float inch;
}d1,d2,sum;

int main()
{
    printf("Enter the 1st Distance");

    printf("\nEnter the feet");
    scanf("%d",&d1.feet);
    printf("\nEnter the inch:");
    scanf("%f",&d1.inch);

    printf("\nEnter the 2nd distance:");

    printf("\nEnter the feet");
    scanf("%d",&d2.feet);
    printf("\nEnter the inch:");
    scanf("%f",&d2.inch);

    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    while(sum.inch >= 12)
    {
        ++sum.feet;
        sum.inch= sum.inch-12;
    }

    printf("\n The Distance is %d feet and %.1f inch",sum.feet,sum.inch);
}