#include <stdio.h>
#include <conio.h>
#include <math.h>  

int main() 
{
    float x1, y1, x2, y2, distance;
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
   
    distance = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

    printf("The distance between the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2,distance);
}
