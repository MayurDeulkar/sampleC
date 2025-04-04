#include<stdio.h>
int main()
{
    int n,a=0,sum=0,sum1=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\n For Loop Even No.:");

for(int i=1; i<=n; i++)
{
    if(i%2 == 0)
    {
        a=i;
        printf("\t %d",a);
        sum += a;
    }
}
printf("\n Sum of Even No. is:%d",sum);

printf("\n For While Loop Even No.:");
int i=1;
while(i<=n)
{
    if(i%2 == 0)
    {
        a=i;
        printf("\t %d",a);
        sum1 += a;
    }
    i++;
}
printf("\n Sum of Even No. is:%d",sum1);

printf("\n for Do-while Loop even no. is:");
i=1,sum1=0;
do{
    if(i%2 == 0)
    {
        a=i;
        printf("\t %d",a);
        sum1 +=a;
    }
    i++;
}while(i<=n);
printf("\n Sum of Even No. is:%d",sum1);
}