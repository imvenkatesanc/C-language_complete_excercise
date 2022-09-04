// using double pointer //
#include<stdio.h>
int main()
{
    int a=12,*s,**t;
    s=&a;
    printf("\n Value of A         : %d",a);
    printf("\n Address of A       : %d",&a);
    printf("\n Value of s         : %d",s);
    printf("\n Address of s       : %d",&s);
    printf("\n Dereferencing of s : %d",*s);
    
    printf("\n-----------------------------\n");
    
    t=&s;
    printf("\n Value of s         : %d",s);
    printf("\n Address of s       : %d",&s);
    printf("\n Value of t         : %d",t);
    printf("\n Address of t       : %d",&t);
    printf("\n Dereferencing of t : %d",**t);
    
    printf("\n-----------------------------\n");
    return 0;
}