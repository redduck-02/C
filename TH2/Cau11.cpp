#include<stdio.h>
void nhapmang(int a[], int n)
{
	int i;
    for (i=0;i<n;i++){
        printf("\nNhap phan tu thu %d: ", i);
        scanf("%d",&a[i]);
	}
}

int tongle(int a[],int n)
{
    int i,s=0;
    for (i=0;i<n;i++) if (a[i]%2!=0) s+=a[i];
    return s;
}
   int main()
{
    int n;
    int a[500];
    printf("\nnhap so phan tu trong mang   :  ");
    scanf("%d",&n);
    nhapmang(a,n);
    printf("\nTong cac phan tu le trong mang: %d",tongle(a,n));
}
