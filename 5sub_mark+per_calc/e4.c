#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,total,average;
printf("Enter Your Five Subject Marks:");
scanf("\n%d\n%d\n%d\n%d\n%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
average=total/5;
printf("\nTotal Marks:%d",total);
printf("\nAggregate Marks:%d",average);
return 0;
}
