/*Viết chương trình nhập vào một dãy số nguyên và thực hiện:
- Tính tổng dãy
- Tính trung bình cộng dãy
- Tìm giá trị lớn nhất của dãy
- Tìm giá trị nhỏ nhất của dãy
- Thống kê số phần tử chẵn của dãy nhỏ hơn x (x nhập từ bàn phím)*/

#include<stdio.h>
#include<stdlib.h>
void Input(int a[], int &n)
{
    printf("Enter n: "); scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
       printf("Enter the quantity for the value a[%d]: ", i);
       scanf("%d", &a[i]);
    }
}

int Sum(int a[], int n)
{
    int Sum = 0;
    for(int i = 0; i < n; i++)
    {
        Sum += a[i];
    }
    return Sum;
}

float Average(int a[], int n)
{
    int ave = Sum(a,n);
    int avrg = (float)ave/n;
    return avrg;
}

int Max(int a[], int n)
{
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        if(max < a[i]) max = a[i];
    }
    return max;
}

int Min(int a[], int n)
{
    int min;
    for(int i = 1; i < n; i++)
    {
        min = a[0];
        if(min > a[i]) min = a[i];
    }
    return min;
}

int sort(int a[], int n)
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Even number: \n");
    for(int i = 0; i < n+2; i++)
    {
        if(a[i] < x && a[i] % 2 == 0) printf("%4d", a[i]);
    }
}

int main()
{
    int a[100], n;
    Input(a,n);
    printf("Sum = %d\n", Sum(a,n));
    printf("Average = %.2f\n", Average(a,n));
    printf("Max = %d\n", Max(a,n));
    printf("Min = %d\n", Min(a,n));
    sort(a,n);
    return 0;
}