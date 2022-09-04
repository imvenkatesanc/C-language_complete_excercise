/* First Method for swap //

#include<stdio.h>
int main()
{
int a,c,d;
printf("Enter Two Numbers:");
scanf("%d%d",&c,&d);
printf("\nC: %d     D: %d",c,d);
a=c;
c=d;
d=a;
printf("\nC: %d     D: %d",c,d);
return 0;
}

// 2nd Method for swaping //

#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("\nC:%d     D:%d ",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\n C:%d    D:%d",a,b);
return 0;
}
*/
// 3rd Method to swapping //

#include<stdio.h>
int main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("\nC:%d     D:%d ",a,b);
a=a*b;
b=a/b;
a=a/b;
printf("\n C:%d    D:%d",a,b);
return 0;
}

