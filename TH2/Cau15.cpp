#include<stdio.h>
void Nhap(int a[], int n){
	printf("Nhap so luong phan tu: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Nhap gia tri cho a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

int ChiaHet3va7(int a[], int n){
	for(int i = 1; i <= 100; i++){
		if(a[i] % 3 && a[i] % 7){
			return 1;
		} else return 0;
	}
}

int main(){
	int n, a[100];
	Nhap(a,n);
	printf("So luong phan tu chia het cho 3 va 7: %5d", ChiaHet3va7(a,n));
}
