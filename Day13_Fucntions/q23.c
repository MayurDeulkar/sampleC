#include<stdio.h>
void getdata(int a,int b,int c);
int main()
{
    int x,y,z;
    printf("Enter the numbers:");
    scanf("%d %d %d",&x,&y,&z);
    getdata(x,y,z);
   
}

void getdata(int a,int b,int c)
{
    if((a>b)&&(a>c))
    {
        printf("%d is greater",a );
    }
    else if((b>a)&&(b>c))
    {
        printf("%d is greater",b );
    }
    else{
        printf("%d is greater",c );
    }
}