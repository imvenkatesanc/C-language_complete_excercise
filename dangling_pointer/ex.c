// Dangling Pointer Var //
#include<stdio.h>
#include<stdlib.h>
int * value()
{
int a=10;
return &a;
}
int main()
{
int * ptr=NULL;
ptr=value();
printf("The Dangling POinter Var is: %d\n",*ptr);
return 0;
}
