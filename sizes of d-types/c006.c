#include<stdio.h>
int main()
{
int a=100;
char ch='D';
double n=9340.23;
printf("character value is:%c\t and character size:%lu byte.\n",&ch,sizeof(char));
printf("integer value is:%d\t and integer size:%lu byte.\n",&a,sizeof(int));
printf("double value:%lf\t and double size:%lu byte.\n",&n,sizeof(double));
return 0;
}
