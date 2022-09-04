/*
Return With Argument Function
==============================
<--------------Function declaration methods---------------------->

1.Function declaration on top
2.Funtion Definition 
3.User Called Function calling to main funtion

*/
#include<stdio.h>
int mul(int,int);
int main()
{
    int a,b,c;
    printf("\nEnter the values: ");
    scanf("%d%d",&b,&c);
    a=mul(b,c);
    printf("\nMultiplication of A & B values: %d",a);
    return 0;
}
int mul(int a,int b)
{
    return a*b;
}