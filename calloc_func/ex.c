#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("\nEnter the range for store Values: ");
    scanf("%d",&n);

    int *p=(int*)calloc(n,sizeof(int));
    if (p==NULL)
    {
        printf("\nMemory Allocation Not available.!");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("\nEnter The Values Need to Store: ");
        scanf("%d",p+i);
    }
    for ( i = 0; i < n; i++)
    {
        printf("\t%d ",*(p+i));
    }
    return 0;
}