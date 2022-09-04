#include<stdio.h>
#include<string.h>
int main()
{
char v[20],b[20];
printf("Enter The String:");
fgets(v,sizeof(v),stdin);
printf("\nString   :%s",v);
printf("\nCopy     :%s",strcpy(b,v));
printf("\nLength   :%d",strlen(v));
return 0;
}

