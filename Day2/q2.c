#include<stdio.h>
#include<conio.h>
int main()
{
	int a=3600,b,c,d;
    int hour,min;
	printf("Enter the Seconds:");
	scanf("%d",&b);

    //for hour
    hour=b/a;
	printf("Hours: %d",hour);

    //for minute
    d = b-3600;
    min=d/60;
    printf("\nMinutes:%d",min);

    c=b % 60;
    printf("\nSeconds:%d",c);
 
}