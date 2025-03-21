#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() 
{
    float a, b, c, dis, r1, r2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) 
    {
        printf("Not a quadratic equation.\n");
    } 
    else 
    {
        // Calculate the discriminant
        dis = (b * b) - (4 * a * c);

        // Check the nature of the roots
        if (dis > 0) 
        {
            // Two distinct real roots
            r1 = (-b + sqrt(dis)) / (2 * a);
            r2 = (-b - sqrt(dis)) / (2 * a);
            printf("Two real roots: %.2f and %.2f\n", r1, r2);
        } 
        else if (dis == 0) 
        {
            // One real root
            r1 = -b / (2 * a);
            printf("One real root: %.2f\n", r1);
        } 
        else 
        {
            // No real roots (complex numbers)
            float d = -b / (2 * a);
            float e = sqrt(-dis) / (2 * a);
            printf("No real roots.\n");
            printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n",d, e, d, e);
        }
    }
}
