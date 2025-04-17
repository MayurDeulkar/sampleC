#include<stdio.h>
int getdata();
int main()
{
    int x;
    x=getdata();
    printf("%d is greater",x);
}

int getdata()
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b)&&(a>c))
    {
        return a;
    }
    else if((b>a)&&(b>c))
    {
       return b;
    }
    else{
      return c;
    }
}