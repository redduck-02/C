#include<stdio.h>
int main()
{
    int x = 10;
    int *y = &x;
    int **z = &y;

    **z = *y + 2;

    printf("%d", **z);

    return 0;
}