#include<stdio.h>
#include<math.h>
void Nhap(int &n){
	printf("Nhap n: ");
	scanf("%d", &n);
}

int ktsnt(int n){
	int dem = 0;
	if(n < 2){
		printf("Khong phai so nguyen to");
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			dem++;
		}
	}
	if(dem == 0){
		printf("Day la so nguyen to");
	} else{
		printf("Day khong phai so nguyen to");
	}
}

int main(){
	int n, dem;
	Nhap(n);
	ktsnt(n);
}
