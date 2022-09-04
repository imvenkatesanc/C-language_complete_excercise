#include<stdio.h>
int sort();
int main()
{
    sort();
    return 0;
}
int sort()
{
    int i,j,n,temp;
    printf("\nEnter the number of elements: ");
    scanf("%d",&n);
    int array[n];
    printf("\n Enter the numbers in the array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(array[j]>array[j+1])
            {
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
    printf("Sorted Array: ");
    for(i=0;i<n;i++)
    {
        printf(" %d ",array[i]);
    }
    return array[i];
}
