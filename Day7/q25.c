#include<stdio.h>
int main()
{   int i,j;

    for(i=5; i>=1; i--)     
    {
		for(int n=i;n<=5; n++)
		{
			printf(" ");
		}
        for(j=1; j<=i; j++)    
        {
            printf("%d",j);
        }
        printf("\n");
    }

}