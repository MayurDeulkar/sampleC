#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the X and Y coordinates:");
    scanf("%d,%d",&x,&y);

    if(x > 0 && y > 0)
    {
        printf("Coordinates in Quadrant-I");
    }
    else if(x < 0 && y > 0)
    {
        printf("Coordinates in Quadrant-II");
    }
    else if(x < 0 && y < 0)
    {
        printf("Coorinates in Quadrant-III");
    }
    else if(x > 0 && y < 0)
    {
        printf("Coorinates in Quadrant-IV");
    }
}