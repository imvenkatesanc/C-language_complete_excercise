#include<stdio.h>
int main()
{
    FILE *fp;
    fp=("sam.txt","w");
    fprint(fp,"Hi! I am VenkatEsan\n");
    fclose(fp);
    return 0;
}