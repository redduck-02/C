#include<stdio.h>
void NhapToaDo(int &x, int &y){
	printf("Nhap toa do: ");
	scanf("%d%d", &x, &y);
}

void XuatToaDo(int x, int y){
	printf("Toa do da nhap la: (%d,%d)", x, y);
}

int main(){
	int x, y;
	NhapToaDo(x, y);
	XuatToaDo(x, y);
	return 0;
}
