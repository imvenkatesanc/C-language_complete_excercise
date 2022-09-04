#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int *p=(int*)malloc(3*sizeof(int));
    if (p==NULL)
    {
        printf("\nMemory Allocation Not available.!");
        exit(1);
    }
    printf("\n Enter 3 Num: \n");
    for (i = 0; i < 3; i++)
    {
        scanf("%d",p+i);
    }
    for (i = 3; i < 5; i++)
    {
        scanf("%d",p+i);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\t%d ",*(p+i));
    }
    return 0;
}