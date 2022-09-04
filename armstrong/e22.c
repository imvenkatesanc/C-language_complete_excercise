#include<stdio.h>
#include<math.h>
int main()
{
int n,a,d1,d2,d3,b;
printf("\nEnter 3 digit number: \n");
scanf("%d",&n);
a=n/10;    //15
d1=a/10;   //1
d2=a%10;   //5
d3=n%10;   //3
printf("\n %d   %d   %d",d1,d2,d3);
b=(d1*d1*d1)+(d2*d2*d2)+(d3*d3*d3);
if(b==n)
{
printf("\nGiven Number is Armstrong!");
}
else
{printf("\nGiven Number is not Armstrong!");}
return 0;
}
