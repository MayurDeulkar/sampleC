#include<stdio.h>
void getdata();
int main()
{
    getdata();
}

void getdata()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        printf("%d is greater",a );
    }
    else if((b>a)&&(b>c))
    {
        printf("%d is greater ",b);
    }
    else{
        printf("%d is greater ",c);
    }
}