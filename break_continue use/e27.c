#include<stdio.h>
int main()
{
int a;
for(a=1;a<=10;a++)
{
if(a==9)
break;
else if(a==3)
continue;
printf("\n%d",a);
}
return 0;
}
