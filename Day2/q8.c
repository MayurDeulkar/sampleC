#include <stdio.h>
#include <conio.h>
int main() 
{
    float w1, w2, totalWeight, averageWeight;
    int n1, n2, totalItems;

    printf("Enter weight and number of first item: ");
    scanf("%f %d", &w1, &n1);

    printf("Enter weight and number of second item: ");
    scanf("%f %d", &w2, &n2);

    totalWeight = (w1 * n1) + (w2 * n2);
    totalItems = n1 + n2;

    if (totalItems > 0) 
    {
        averageWeight = totalWeight / totalItems;
        printf("\n Average weight per item: %.2f", averageWeight);
    } 
    else 
    {
        printf("\n Invalid input");
    }
}
