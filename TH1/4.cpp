#include<stdio.h>
#include<math.h>
void Nhap(int &a){
	printf("Nhap a: ");
	scanf("%d", &a);
}

int SNT(int a){
	int dem = 0;
	if(a < 2){
		printf("%d khong phai la so nguyen to", a);
		return 0;
	}

	for(int i = 2; i <= sqrt(a); i++){
		if(a % i == 0){
			dem++;
		}
	}

	if(dem == 0){
		printf("%d la so nguyen to", a);
	} else{
		printf("%d khong phai so nguyen to", a);
	}
return 0;
}

int main(){
	int a;
	Nhap(a);
	SNT(a);
	printf("\n");
return 0;
}