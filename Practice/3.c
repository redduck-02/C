#include<stdio.h>
int main(){
	int n;

	printf("Nhap n: ");
	scanf("%d", &n);

	if(n%2==0){
		printf("Day la so chan");
	} else{
		printf("Day la so le\n");
	}
}
