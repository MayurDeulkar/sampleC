#include<stdio.h>
int main()
{
    int a=63,b=64;
    for(int i=1; i<=2; i++)
    {
        for(int j=1; j<=4; j++)
        {
            if(i%2 !=0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%c",i+a);
            }
        }
        printf("\n");
    }

    for(int i=1; i<=2; i++)
    {
        for(int j=4; j<=7; j++)
        {
            if(i%2 !=0)
            {
                printf("%d",j);
            }
            else
            {
                printf("%c",i+b);
            }
        }
        printf("\n");
    }   
}