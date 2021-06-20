#include<stdio.h>
int ktsnt(int x){
	if(x<=0){
		return 0;
	}
	for(int i=2; i<=x-1; i++){
		if(x%i==0){
			return 0;
		}
		return 1;
	}
}

int main(){
	int n;
	
	printf("Nhap n: ");
	scanf("%d", &n);
	
	int kt = ktsnt(n);
	
	if(kt==0){
		printf("Day khong phai la so nguyen to");
	} else{
		printf("Day la so nguyen to");
	}
}
