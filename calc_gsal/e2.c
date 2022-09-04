#include<stdio.h>
int main()
{
int basicsalary,dearness,houserent,grosssalary;
printf("Enter Your Basic Salary:");
scanf("%d",&basicsalary);
dearness=basicsalary*0.4;
printf("\nDearness Allowance:%d",dearness);
houserent=basicsalary*0.2;
printf("\nHouse Rent Allowance:%d",houserent);
grosssalary=basicsalary+dearness+houserent;
printf("\nGross Amount:%d",grosssalary);
return 0;
}
