// Call By Reference Value using value swapping //
#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 1;
}
int main()
{
    int n,m;
    printf("\nEnter The Value Of A & B : \n");
    scanf("%d%d",&n,&m);    
    printf("Before Swap  A:  %d     |   B:   %d",n,m);
    swap(&n,&m);
    printf("\n\nAfter  Swap  A:  %d     |   B:   %d",n,m);
    return 0;
}
