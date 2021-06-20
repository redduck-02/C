#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    //tencontro = (kieudulieu*)calloc(soluongphantu,sizeof(kieudulieu));
    p = (int*)calloc(5, sizeof(int));
    int i;
    for(i = 0; i < 5; i++)
    {   
        printf("Enter value: ");
        scanf("%d", (p+i));
    }
    for(i = 0; i < 5; i++)
    {
        printf("%d\t", *(p+i));
    }
}