#include<stdio.h>
#include<stdlib.h> //Thư viện cung cấp hàm malloc
int main()
{
    int *p;
    //tencontro = (kieudulieu*)malloc(soluongonho * sizeof(kieudulieu));
    p = (int*)malloc(5 * sizeof(int)); 
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Enter value: ");
        scanf("%d", (p+i));
    }
    for(i = 0; i < 5; i++)
    {
        printf("\t%d", *(p+i));
    }
    return 0;
}