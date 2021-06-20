#include<stdio.h>
int a = 2;
void show()
{
    a = 3;
    printf("%d", a);
}

int main()
{
    show();
    a = 4;
    printf("\n%d\n", a);
    //a là biến toàn cục -> có thể tuỳ ý truy cập và thay đổi giá trị

    for(int i = 0; i < 10; i++)
    {
        printf("\t%d", i);
    }
    //i là biến cục bộ của vòng lặp for, ra khỏi for thì biến i không còn tồn tại
    return 0;
}