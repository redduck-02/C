#include<stdio.h>
#include<stdlib.h>
//So So sánh khởi tạo giá trị ban đầu của Malloc() và Calloc()
void showInfo(int *a)
{
    for(size_t i = 0; i < 10; i++) //size_t: loại số nguyên 0 dấu, dùng để đại diện cho kích thước của 1 đối tượng
    {
        printf("%5d", a[i]);
    }
    printf("\n");
}

int main()
{
    //Malloc
    puts("Use malloc: ");
    int *a = (int*)malloc(10 * sizeof(int));
    showInfo(a);
    free(a);
    //Calloc
    puts("Use calloc: ");
    a = (int*)calloc(10, sizeof(int));
    showInfo(a);
    free(a);
    return 0;
}