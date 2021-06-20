#include<stdio.h>

void exchange(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//Use pointer;
void Exchange(int *px, int *py)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = temp;
}

int main()
{
    int a = 5;
    int b = 6;

    printf("Gia tri ban dau: %d %d\n", a, b);
    puts("Khong dung con tro: ");
    exchange(a, b);
    printf("%d %d\n", a, b);
    puts("Dung con tro: ");
    Exchange(&a,&b);
    printf("%d %d", a, b);
    
    return 0;
}