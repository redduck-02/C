#include<stdio.h>
void nhap (int *arr, int *n){
	while (*n <= 0){
	printf ("Nhap n lon hon khong:");
	scanf ("%d", n);
	}
	int i;
	for (i=0; i<*n; i++){
		printf("arr[%d] =", i);
		scanf ("%d", &arr[i]);
	}
}

void sapxeptangdan (int *arr, int n){
	int i, j;
	for (i=0; i<n-1; i++ ){
		for (j=n-1; j>i; j--){
			if (arr[j]<arr[j]<arr[j-1]){
				int tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
}

void hienthi(int *arr, int n){
	int i;
	for (i=0; i<n; i++){
		printf ("%6d", arr[i]);
	}
	printf ("\n");
}

int main()
{
	int n=0;
	int arr[100];
	nhap (arr, &n);
	hienthi (arr, n);
	sapxeptangdan (arr,n);
	hienthi (arr, n);
	return 0;
}

