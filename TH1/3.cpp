#include<stdio.h>
void Nhap(int &a, int &b){
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
}

int UCLN(int a, int b){
	while(a != b){
		if(a > b){
			a = a - b;
		} else{
			b = b - a;
		}
	}
	return a;
}

int BCNN(int a, int b){
	return (a*b)/UCLN(a,b);
}

int main(){
	int a, b;
	Nhap(a,b);
	printf("\nUoc chung lon nhat: %d", UCLN(a,b));
	printf("\nBoi chung nho nhat: %d", BCNN(a,b));
	printf("\n");
return 0;
}