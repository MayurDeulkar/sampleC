#include<stdio.h>
int getdata(int a,int b,int c);
int main()
{
    int w,x,y,z;
    printf("Enter the numbers:");
    scanf("%d %d %d",&x,&y,&z);
    w = getdata(x,y,z);
    printf("%d is greater",w);
   
}

int getdata(int a,int b,int c)
{
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