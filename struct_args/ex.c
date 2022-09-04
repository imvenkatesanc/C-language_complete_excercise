#include<stdio.h>
struct student
{
    char *name;
    int age;
    float per;
};
void print(struct student p)
{
    printf("\nStudent Name      : %s",p.name);
    printf("\nStudent Age       : %d",p.age);
    printf("\nStudent Percentage: %0.1f",p.per);
}
int main()
{
    struct student p={"Venki",20,78.7};
    print(p);
    return 0;
}