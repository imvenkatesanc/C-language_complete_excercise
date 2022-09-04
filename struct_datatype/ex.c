#include<stdio.h>
#include<stdlib.h>

struct employee
{
    int Empno;
    int empAge;
    char *empname;
    double ph;
};

int main()

{
    struct employee e1;
    e1.Empno=01;
    e1.empAge=32;
    e1.empname="Vasu";
    e1.ph=8126202050;
    printf("\nEmployee NO       :%d",e1.Empno);
    printf("\nEmployee Age      :%d",e1.empAge);
    printf("\nEmployee Name     :%s",e1.empname);
    printf("\nEmployee Ph.No    :%0.2lf",e1.ph);
    return 0;
}