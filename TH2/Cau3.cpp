#include<stdio.h>
void nhap (float *arr, float *n){
	while (*n <= 0){
	printf ("Nhap n lon hon khong:");
	scanf ("%f", n);
	}
	int i;
	for (i=0; i<*n; i++){
		printf("arr[%d] = ", i);
		scanf ("%f", &arr[i]);
	}
}
void sapxepgiamdan (float *arr, float n){
	int i, j;
	for (i=0; i<n-1; i++){
		for(j=n-1; j>i; j--){
			if (arr[j]>arr[j-1]){
				int tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
}
void hienthi(float *arr, float n){
	int i;
	for (i=0; i<n; i++){
		printf ("%.2f\t", arr[i]);
	}
	printf ("\n");
}

int main()
{
	float n = 0;
	float arr[100];
	nhap (arr, &n);
	hienthi (arr, n);
	sapxepgiamdan (arr,n);
	hienthi (arr, n);
	return 0;
}

