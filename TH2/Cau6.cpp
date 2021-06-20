#include<stdio.h>
void Nhap(int a[], int &n){
	printf("Nhap n: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		printf("Nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}

bool ktsnt(int n){
	bool snt = true;
	for(int i = 2; i < n; i++){
		if(n % i == 0){
			snt = false;
		}
	}
	return snt;
}

int Demsnt(int n){
	int dem = 0;
	for(int i = 1; i <= n; i++){
		if(ktsnt(i)){
			dem++;
		}
	}
	return dem;
}

int main(){
	int a[100], n;
	Nhap(a,n);
	printf("So luong so nguyen to co trong mang la: %d", Demsnt(n));
	printf("\n");
}