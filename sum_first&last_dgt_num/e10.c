#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h;
printf("Enter any four digit number:");
scanf("%d",&a);
b=a/10;  //123
c=a%10;  //4
d=b/10;  //12
e=b%10;  //3
f=d/10;  //1
g=d%10;  //2
h=(f+c);
printf("\n%d sum of first and last digit number: %d",a,h);
return 0;
}
