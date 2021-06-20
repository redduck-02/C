#include<stdio.h>
void nhap(int a[n], int n){
	printf("Nhap so luong n: ");
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Nhap gia tri a[%d]: ", i);
		scanf("%d", &a[i]);
	}
}


void MaxAm(int a[n], int n){
	if(a[n-1]>=0){
		printf("Day khong co so am");
	} else{
		int i=a[n-1];
		for(int i = n-2; i>=1; i--){
			if(max<a[i] && a[i])<0){
				max=a[i];
				break;
			}
		}
	}
}


int SoHoanHao(int a){
	int S = 0;
	for(int = 0; i<a; i++){
		if(a%i==0){
			S += i;
		}
	}
	if(S == a)
		return 1;
	else
		return 0;
}


void inraSoHoanHao(int a[i], int n){
	for(int i = 0; i<n; i++){
		if(SoHoanHao(a[i])){
			printf("\t%d", a[i]);
		}
	}
}



int main(){
}
