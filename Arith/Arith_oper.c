#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two number:");
    scanf("\n%d\n%d",&a,&b);
    c=a+b;
    printf("\nTotal Add:%d",c);
    c=a-b;
    printf("\nTotal Sub:%d",c);
    c=a*b;
    printf("\nTotal Mul:%d",c);
    c=a/b;
    printf("\nTotal Div:%d",c);
    c=a%b;
    printf("\nTotal Mod:%d",c);
    return 0;
}
