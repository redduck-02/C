/*Viết chương trình nhập vào một ma trận thực cấp nxn rồi thực hiện:
- Tính tổng ma trân.
- Tìm giá trị lớn nhất của ma trận
- Tính tích các phần tử của từng cột của ma trận và cho biết
những cột nào có tích nhỏ nhất.
- Ma trận trên có phải là ma trận tam giác không.*/

#include<stdio.h>
void nhapMatran(int a[][100], int m, int n){
	
	for(int i=0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void xuatMatran(int a[][100], int m, int n){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			printf("%5d\t", a[i][j]);
		}
		printf("\n");
	}
}

int max(int a[][100], int m, int n){
	int max=a[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]>max)
				max = a[i][j];
		}
	}
	return max;
}

void tinhtich(int a[][100], int n){ 
	for(int i=0; i<n; i++){
		int tich = 1;
		for(int j=0; j<n; j++){
			tich *=a[i][j];
		}
		printf("\ntich cac phan tu cot thu %d la: %d", i, tich);
	}
}

int tichmin(int a[], int m, int n){
	int d;
	double min = tinhtich(a,m,n);
	for(int i = 1; i < m; i++){
		double t = tinhtich(a,i,n);
		if(min > t){
			min = t;
			d = 1;
		}
	}
	return d;
}

int main(){
	int a[100][100];
	int m,n;printf("Nhap vao so hang n: ");
	scanf("%d", &n);
	printf("Nhap vao so cot m: ");
	scanf("%d", &m);
	nhapMatran(a,m,n);
	xuatMatran(a,m,n);
	printf("\nPhan tu lon nhat la: %d", max(a,m,n));
	tinhtich(a,n);
	tichmin(a, m,n);
}
