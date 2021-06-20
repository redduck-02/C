#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void NhapMang(int *a, int &n)
{
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", (a+i));
    }
}

void XuatMang(int *a, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, *(a+i));
    }
}

int Tong(int *a, int n)
{
    int tong = 0;

    for(int i = 0; i < n; i++)
    {
        tong += *(a+i);
    }

    return tong;
}

int NguyenAmT2(int *a, int n)
{
    int firstMax, secondMax;
    if (*a < *(a + 1)){
        firstMax = *a;
        secondMax = *(a + 1);
    }else{
        firstMax = *(a + 1);
        secondMax = *a;
    }
    for(int i = 2; i < n; i++){
        if(*(a + i) <= firstMax){
            secondMax = firstMax;
            firstMax = *(a + i);
        }else if (*(a + i) < secondMax){
            secondMax = *(a + i);
        }
    }
    return secondMax;
}

bool ktsnt(int n)
{
    bool snt = true;

    if(n < 2)
    {
        snt = false;
    }
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                snt = false;
            }
        }

    return snt;
}

void daonguoc(int *a, int n)
{
    printf("\nMang dao nguoc la: ");

    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d\t", *(a+i));
    }
}

int demsnt(int *a, int n)
{
    int dem = 0;

    for(int i = 0; i < n; i++){
	    if(ktsnt(*(a+i))==1)
        {
            printf("\n%d", *(a+i));
	        dem++;
	    }
}

    return dem;
}

int main()
{
    int *a, n;

    a = (int*)calloc(100, sizeof(int));

    NhapMang(a,n);
    XuatMang(a,n);

    printf("Tong day so la %d", Tong(a,n));

    printf("\nSo luong so nguyen to co trong day: %d", demsnt(a,n));

    daonguoc(a,n);

    printf("\nPhan tu am lon nhat thu II: %d", NguyenAmT2(a,n));

    free(a);

    return 0;
}