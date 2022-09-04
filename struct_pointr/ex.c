#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};

int main()
{
    struct student p={"Venki",20,78.7};
    struct student *ptr=&p;

    printf("\nStudent Name      : %s",(*ptr).name);
    printf("\nStudent Age       : %d",(*ptr).age);
    printf("\nStudent Percentage: %0.1f",(*ptr).per);
    return 0;
}