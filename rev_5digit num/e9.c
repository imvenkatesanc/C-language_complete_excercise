#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g,h,i,sum;
printf("Enter any five digit number:");
scanf("%d",&a);
b=a/10;//1234
c=a%10;//5
d=b/10;//123
e=b%10;//4
f=d/10;//12
g=d%10;//3
h=f/10;//1
i=f%10;//2
sum=(c*10000)+(e*1000)+(g*100)+(i*10)+(h);
printf("\nReverse of %d is: %d",a,sum);
return 0;
}
