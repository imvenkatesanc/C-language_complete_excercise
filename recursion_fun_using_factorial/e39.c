// Recursion function calling for an example Factorial..! //
#include<stdio.h>
long double factorial(long double a)
{
    if(a<=1)
    {
        return 1;
    }
    return a*factorial(a-1);
}
int main()
{
    long double n;
    printf("\nEnter The Value of Factorial You Need: ");
    scanf("%Lf",&n);
    printf("\nFactorial: %0.2Lf",factorial(n));
    return 0;
}