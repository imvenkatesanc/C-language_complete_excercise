#include<stdio.h>
int main()
{
int amount,hrs,frs,trs,rrs;
printf("Enter The Amount: ");
scanf("%d",&amount);       // 2375
hrs=amount/100;            // 23.75-->23
frs=(amount%100)/50;       // 1.5-->1
trs=((amount%100)%50)/10;  // 25--> 2
rrs=((amount%100)%50)%10;  // 25--> 5
printf("\nRequired Notes for Rs.100         : %d",hrs);
printf("\nRequired Notes for Rs.50          : %d",frs);
printf("\nRequired Notes for Rs.10          : %d",trs);
printf("\nRequired Notes for remaining      : %d.Rs",rrs);
return 0;
}
