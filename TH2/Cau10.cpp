#include<stdio.h>
void Nhap(int a[], int &n){
	printf("Nhap so luong cho mang: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Nhap gia tri cho a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

void TongChan(int a[], int n){
	int S = 0;
	for(int i = 0; i < n; i++){
		if(a[i] % 2 == 0){
		S += a[i];
		}
	}
	printf("S = %d", S);
}

int main(){
	int a[100], n;
	Nhap(a,n);
	TongChan(a,n);
}
