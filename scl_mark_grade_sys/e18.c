#include<stdio.h>
int main()
{
int m1,m2,m3,m4,m5,result,total;
float avg;
printf("\nEnter Your 5 subjects marks: \n");
scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
total=m1+m2+m3+m4+m5;
avg=total/5;
printf("\n Total Marks  : %d",total);
printf("\n Average Marks: %0.2f",avg);
if(m1>=35 && m2>=35 && m3>=35 && m4>=35 && m5>=35)
{
printf("\n Result       : Pass");
if(avg<=100 && avg>=90)
{
printf("\n GRADE        : A");
}
else if(avg<=89 && avg>=80)
{
printf("\n GRADE        : B");
}
else if(avg<=79 && avg>=70)
{
printf("\n GRADE        : C");
}
else if(avg<70)
{
printf("\n GRADE        : D");
}
}
else
{
printf("\n Result       : Fail");
printf("\n GRADE        : No Grade");
}
return 0;
}
