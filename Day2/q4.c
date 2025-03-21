#include <stdio.h>
#include<conio.h>
int main() 
{
    float dis, fuel, avg;

    printf("Enter the total distance travelled (in kilometers): ");
    scanf("%f", &dis);

    printf("Enter the total fuel consumed (in liters): ");
    scanf("%f", &fuel);

        avg = dis / fuel; 
        printf("\n The average fuel consumption is: %.2f km per liter", avg);
}
