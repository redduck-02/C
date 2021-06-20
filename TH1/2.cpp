#include<stdio.h>
#include<math.h>
void Nhap(int &a, int &b, int &c){
	printf("Nhap canh a: ");
	scanf("%d", &a);
	printf("Nhap canh b: ");
	scanf("%d", &b);
	printf("Nhap canh c: ");
	scanf("%d", &c);
}

void Tamgiac(int a, int b, int c){
	int S, P, p;
	P = a + b + c;
	p = P/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	if(a + b > c && a + c > b && b + c > a){
		printf("\nDien tich tam giac: %d", S);
		printf("\nChu vi tam giac: %d", P);
	} else{
		printf("Khong tinh duoc");
	}
}

int main(){
	int a, b, c;
	Nhap(a,b,c);
	Tamgiac(a,b,c);
	printf("\n");
return 0;	
}