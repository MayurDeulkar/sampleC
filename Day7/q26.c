#include<stdio.h>
int main()
{   int i,j;
    char a[10]={'A','B','C','D','E'};
    for(i=5; i>=0; i--)      
    {
		for(int n=i;n<=5; n++)
		{
			printf(" ");
		}
        for(j=0; j<=i; j++)    
        {
            printf("%c",a[i]);
        }
        printf("\n");
    }

}