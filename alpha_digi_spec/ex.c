#include<stdio.h>
#include<string.h>
#include<strings.h>
int main()
{
 char str[100];
 int i,a=0,n=0,s=0;
 printf("\nEnter The String: ");
 gets(str);
 for ( i; str[i]!='\0' ; i++)
 {
    if ((str[i]>=65&&str[i]<=95) || (str[i]>=97&&str[i]<=122))
    {
        a++;
    }
    else if(str[i]>=48&&str[i]<=57)
    {
        n++;
    }
    else
    {
        s++;
    }
 }
 printf("\n Number Of Alphabets          : %d",a);
 printf("\n Number Of Digits             : %d",n);
 printf("\n Number Of Special Characters : %d",s);
 return 0;
}