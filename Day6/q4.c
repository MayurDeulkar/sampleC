#include<stdio.h>
int main()
{
    int n,a=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n For Loop Even No.:");

for(int i=1; i<=n; i++)
{
    if(i%2 == 0)
    {
        a=i;
        printf("\t %d",a);
    }
}

printf("\n For While Loop Even No.:");
int i=1;
while(i<=n)
{
    if(i%2 == 0)
    {
        a=i;
        printf("\t %d",a);
    }
    i++;
}

printf("\n for Do-while Loop even no. is:");
i=1;
do{
    if(i%2 == 0)
    {
        a=i;
        printf("\t %d",a);
    }
    i++;
}while(i<=n);

}