#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("sam.txt","r");
    if (fp==NULL)
    {
        printf("\n File can not open or directory can't found..");
    }
    while(1)
    {
        c=fgetc(fp);
        if(c==EOF)
            break;
        printf("\n%c",c);
    }
    return 0;
}