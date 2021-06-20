#include<stdio.h>
int Fibonaci(int n){
	if(n == 2 || n == 1){
		return 1;
	} else{
		return Fibonaci(n-1) + Fibonaci(n-2);
	}
}
						
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("%d", Fibonaci(n));
}
