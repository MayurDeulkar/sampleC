#include<stdio.h>
#include<conio.h>
int main()
{
	int d,a=365, b=7;
	printf("Enter the Days:");
	scanf("%d",&d);
	printf("Days into year: %d",d/a);
	printf("\n Days into weeks: %d",d/b);
	printf("\n Days into month: %d",d/30);
}
