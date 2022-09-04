/*
Return No Argument Function
==============================
<--------------Function declaration methods---------------------->

1.Function declaration on top
2.Funtion Definition 
3.User Called Function calling to main funtion

*/
#include<stdio.h>
int mul();
int main()
{
    int c;
    c=mul();
    printf("\nMultiplication Of values A & B: %d",c);
    return 0;
}
int mul()
{
    int a,b;
    printf("\nEnter the value of A & B: ");
    scanf("%d%d",&a,&b);
    return a*b;
}