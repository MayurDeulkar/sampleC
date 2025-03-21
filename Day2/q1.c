#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,d,e,f;
    int year,month,day=0;
	printf("Enter the Days:");
	scanf("%f",&d);

    year = d/365;
	printf("Days into year: %d",year);

//for month
    a=d/30;
    if(a>12)
    {
        b=a-12;
        month=b;
        printf("\n Month %d",month);
    }
    else
    {
        printf("\n Days:0");
    }

    //for days
    c=d-365;
    if(c!=0)
    {
        e=c/30;
   f=(e*10)-30;
   day=f;
	printf("\n Days: %d",day);
    }
    else
    {
        printf("\n Days:0");
    }
    
}