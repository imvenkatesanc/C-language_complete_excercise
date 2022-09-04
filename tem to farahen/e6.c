#include<stdio.h>
int main()
{
float fahrenheit,celcius;
printf("Enter the temperature format of fahrenheit:");
scanf("%f",&fahrenheit);
celcius=(fahrenheit-32)*5/9;
printf("\nCelcius of entered fahrenheit temperature:%0.4f",celcius);
return 0;
}

