#include<stdio.h>
void nhap(int a[], int n){
    printf("Nhap n = ");
    scanf("%d", &n);
	for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}

int main(){
    int a[100];
    int n;
    nhap(a, n);
    printf("\nMax = %d", max(a,n));
    return 0;
}
 
