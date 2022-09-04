#include<stdio.h>
int main()
{
int a,b,n,c=0;
printf("\nEnter The count of you sum: ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
printf("\nEnter The Number: ");
scanf("%d",&n);
if(n==0)
continue;
c=c+n;
}
printf("\nYou entered %d numbers of total is : %d",a,c);
return 0;
}
