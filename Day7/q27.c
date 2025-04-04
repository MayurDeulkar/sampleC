#include<stdio.h>
int main()
{   int i,j;
    char a[10]={' ','A','B','C','D','E'};
    for(i=4; i>=0; i--)      
    {
		for(int n=i;n<=4; n++)
		{
			printf(" ");
        } 

       for(j=0; (j<=i); j++)  
        {
            printf("%c",a[j]=a[j+1]);
        }
        printf("\n");
    }

}