#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};

int main()
{
    struct student p[2];
    
    p[0].name="Sha";
    p[0].age=19;
    p[0].per=92.25;

    p[1].name="Usaid";
    p[1].age=20;
    p[1].per=99.99;

    p[2].name="Asen";
    p[2].age=20;
    p[2].per=49.99;

    printf("\n------------------------------------------------\n");
    printf("\nStudent Name      : %s",p[0].name);
    printf("\nStudent Age       : %d",p[0].age);
    printf("\nStudent Percentage: %0.1f",p[0].per);
    printf("\n------------------------------------------------\n");
    printf("\nStudent Name      : %s",p[1].name);
    printf("\nStudent Age       : %d",p[1].age);
    printf("\nStudent Percentage: %0.1f",p[1].per);
    printf("\n------------------------------------------------\n");
    printf("\nStudent Name      : %s",p[2].name);
    printf("\nStudent Age       : %d",p[2].age);
    printf("\nStudent Percentage: %0.1f",p[2].per);
    printf("\n-------------------------------------------------\n");
    
    return 0;
}