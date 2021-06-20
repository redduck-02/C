#include<stdio.h>
int main()
{   
    FILE *fp;
    fp = fopen ("file.txt","w");
    fputs("Nguyen Sy Tu\n", fp);
    fclose(fp);
    return 0;
}