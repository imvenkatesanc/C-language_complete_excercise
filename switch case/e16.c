#include<stdio.h>
int main()
{
int i;
printf("\nEnter the value: ");
scanf("%d",&i);
switch(i)
{
case 1:
{
printf("\nOne");
break;
}
case 2:
{
printf("\nTwo");
break;
}
case 3:
{
printf("\nThree");
break;
}
default:
{
printf("\nInvalid");
break;
}
}
return 0;
}
