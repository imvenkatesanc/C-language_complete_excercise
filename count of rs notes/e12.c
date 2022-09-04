#include<stdio.h>
int main()
{
int amount,h,f,t,r;
printf("\nEnter The Amount:");
scanf("%d",&amount);//1275
h=amount/100;
f=(amount%100)/50;
t=((amount%100)%50)/10; 
r=(amount%100)%10;
printf("\nCount of Rs.100 Notes are      :   %d",h);
printf("\nCount of Rs.50 Notes are       :   %d",f);
printf("\nCount of Rs.10 Notes are       :   %d",t);
printf("\nCount of still remain coins are:   %d.Rs",r);
return 0;
}
