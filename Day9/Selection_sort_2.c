#include<stdio.h>
int main()
{
    int temp=0,i,j;
    float arr[10], kel[10],fah[10],a=273.15;
    printf("Enter the Celsius:");
    for(int i=0; i<=5; i++)
    {
        scanf("%f",&arr[i]);
    }
    for( i=0;i<=5; i++)
    {
        for( j=i+1; j<=5; j++)
        {
            if(arr[i]> arr[j])
            {
                temp=arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            } 
        }   
    }
    printf("Celsius after sorting: ");
    for(i=0; i<=5; i++)
    {
        printf("%fC, ",arr[i]);
    }
    printf("\nCelsius into Kelvin: ");
    for(i=0; i<=5; i++)
    {
        kel[i]=arr[i]+a;
        printf("%.2fKelvin, ",kel[i]);
    }
    printf("\nCelsius into Fahrenheit: ");
    for(i=0; i<=5; i++)
    {
        fah[i]=(arr[i]*9/5)+32;
        printf("%.1fF, ",fah[i]);
    }
}