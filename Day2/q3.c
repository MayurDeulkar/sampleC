#include <stdio.h>
#include<conio.h>
int main() 
{
    int num1, num2, num3;
    
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3) 
    {
        printf("The maximum value is: %d", num1);
    } 
    else if (num2 >= num1 && num2 >= num3) 
    {
        printf("\n The maximum value is: %d", num2);
    } 
    else 
    {
        printf("\n The maximum value is: %d", num3);
    }
}
