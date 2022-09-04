// To find array of ODD And EVEN numbers count //

#include<stdio.h>
int main()
{
    int a[100],n,e=0,o=0;
    printf("\nEnter the range: ");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        printf("\nEnter The Value: ");
        scanf("%d",&a[i]);
        a[i]%2==0?e++:o++;  
    }
    printf("\nCount Of Even Number is: %d",e);
    printf("\nCount Of Odd  Number is: %d",o);
    return 0;
}