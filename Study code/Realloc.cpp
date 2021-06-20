#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    int i;
    
    p = (int*)malloc(5 * sizeof(int));

    for(i = 0; i < 5; i++)
    {
        scanf("%d", (p+i));
    }
    
    puts("Du lieu ban dau khi chua cap phat bo nho: \n");

    for(i = 0; i < 5; i++)
    {
        printf("%5d", *(p+i));
    }

    printf("\n");
    p = (int*)realloc(p,10);

    for(int i = 5; i < 10; i++)
    {
        scanf("%d", (p+i));
    }

    puts("Du lieu sau khi cap phat them o nho: \n");

    for(i = 0; i < 10; i++)
    {
        printf("%5d", *(p+i));
    }

    return 0;
}