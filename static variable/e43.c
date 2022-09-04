// static variable //
#include<stdio.h>
int temp();
int main()
{
    temp();
    temp();
    temp();
}
int temp()
{
    static int a=1;
    a++;
    printf("\n\t A: %d",a);
}