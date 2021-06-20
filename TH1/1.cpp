#include<stdio.h>
#include<math.h>
void Nhap(int &dai, int &rong){
	printf("Nhap chieu dai: ");
	scanf("%d", &dai);
	printf("Nhap chieu rong: ");
	scanf("%d", &rong);
}

void HCN(int dai, int rong){
	int S, P;
	P = (dai + rong)*2;
	S = dai*rong;
	if(dai > 0 && rong > 0){
		printf("Dien tich hinh chu nhat la: %d", S);
		printf("\nChu vi hinh chu nhat la: %d", P);
	} else{
		printf("\nKhong tinh duoc");
	}
}

int main(){
	int dai, rong;
	Nhap(dai,rong);
	HCN(dai,rong);
	printf("\n");
return 0;	
}