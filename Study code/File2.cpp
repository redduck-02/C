#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[255];
    fp = fopen("file.txt", "r");
    fgets(buff, 255, (FILE*)fp);
    printf("Thong tin trong File: %s\n", buff);
    return 0;
}