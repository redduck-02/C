#include<stdio.h>
int main()
{	
	int dem ;
	int n;
    int arr[100];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    NhapMang(arr, n);
    dem = demam(arr,n);
    printf ("so phan tu am co trong mang la:%d", dem);
    return 0;
}
void NhapMang(int a[], int n)
{
	
	int i;
    for(i = 0;i < n; i++)
	{
        printf("\nNhap phan tu a[%d] = ", i);
        scanf("%d",  &a[i]);
	}	
}
int demam(int a[],int n)
{
	int dem =0;
	int i = 0;
	for(i; i< n;i++)
    {
    	if(a[i]>=0)
    	{
    		dem++;
    	
    	}
	}
    return dem;
}
	

