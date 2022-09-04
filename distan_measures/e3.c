#include<stdio.h>
int main()
{
float km,meter,feet,inch,cm;
printf("Enter the Kilometer:");
scanf("%f",&km);
meter=km*1000;
cm=meter*100;
inch=cm/2.54;
feet=inch/12;
printf("\nkilometer:%0.2f",km);
printf("\nmeter:%0.2f",meter);
printf("\nFeet:%0.2f",feet);
printf("\nInches:%0.2f",inch);
printf("\nCentimeter:%0.2f",cm);
return 0;
}

