#include<stdio.h>
int main()
{
float tons,kilo,rs;
printf("Enter the kilo of sugarcane:");
scanf("%f",&kilo);
tons=kilo/1000;
rs=tons*2500;
printf("\nEntered sugarcane rate:%0.2f",rs);
return 0;
}

