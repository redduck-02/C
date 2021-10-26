#include<stdio.h>
int main(){
	int a = 5, b = 6;
	int tong, hieu, tich, thuongdu;
	float thuong;

	tong = a+b;
	hieu = a-b;
	tich = a*b;
	thuong = (float)a/(float)b;
	thuongdu = a%b;

	printf("Tong = %d", tong);
	printf("\nHieu = %d", hieu);
	printf("\nTich = %d", tich);
	printf("\nThuong = %f", thuong);
	printf("\nThuong du = %d", thuongdu);
	printf("\na++ = %d", a++);
	printf("\na = %d", a);
	printf("\na-- = %d", a--);
	getchar();
}
