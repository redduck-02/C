#include<stdio.h>
int a[100], n;

void nhap(){
	printf("Nhap so luong n: ");
	scanf("%d", &n);
	for(int i = 0; i< n; i++ ){
		printf("\nNhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}


void timkiem(){
	int maxAm = 0; // minD = 0;
	for(int i = 0; i<n;i++)
		if( a[i] < 0){ // >
			maxAm = a[i];
			break;
		}
	if(maxAm != 0 ){
		for(int  i = 0; i< n; i++ ){
			if( a[i] < 0 && a[i] > maxAm ) maxAm = a[i];
		}
		printf("\nPhan tu am lon nhat: %d", maxAm);
	}
	else printf("\nKhong co phan tu am trong mang");
}


int main(){
	nhap();
	timkiem();
	return 0;
}
