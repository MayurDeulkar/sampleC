#include<stdio.h>
int main()
{
    int a[5]={5,4,3,2,1};
    
    for(int i=0; i<=3; i++)
    {
        for (int j=0; j<=4; j++)
        {
            printf("%d ",a[j]); 
        }
        printf("\n");
    }

}