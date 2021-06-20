#include<stdio.h>

int main()
{
    int list[5] = {9,8,7,6,5};
    int *p;
    p = list;
    p = &list[0];
    p = &list[1];
    p = list + 1;

    printf("%d %d %d %d", *p, *(p+0), *(p+1), *(p+1));
    return 0;
}