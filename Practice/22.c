#include<stdio.h>
int main(){
	int n, giaithua;
	
	do{
		printf("Nhap vao n (n>=0): ");
		scanf("%d", &n);
	}while(n<0);
	
	giaithua = 1;
	for(int i = 1; i <= n; i++){
		giaithua = giaithua * i;
	}
	printf("Giai thua cua %d la %d", n, giaithua);
}
