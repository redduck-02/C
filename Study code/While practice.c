//Nhap n tu ban phim, tinh tong cac con so tu 1 den n va in ra ket qua
#include<stdio.h>
int main(){
	int n, tong = 0, i = 0;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	while(i<=n){
		tong = tong + i;
		i++;
	}
	printf("\nTong = %d", tong);
}
