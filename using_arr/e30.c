#include<stdio.h>
int main()
{
int n,m,a[200];
printf("\nEnter The Limit: ");
scanf("%d",&n);
for(m=0;m<n;m++)
{
printf("\nEnter The Number: ");
scanf("%d",&a[m]);
}
for(m=0;m<n;m++)
{
printf("\n\t%d ",a[m]);
}
return 0;
}

