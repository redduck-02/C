#include<stdio.h>
int ktshh(int a){
	int sum = 0;
	if(a<=0){
		return  0;
	}
	else{
		int i = 1;
		for(i; i<a; i++){
			if(a%i==0){
				sum+=i;
			}
		}
		if(sum == a){
			return 1;
		}
		return 0;
	}
	
}


void NhapMang(int a[], int n){
	int i;
    for(i = 1;i <= n; i++)
	{
        printf("Nhap so  %d: ", i);
        scanf("%d", &a[i]);
    }
}


void xuatSoHoanHao(int a[], int n){
	int i;
	printf("So hoan hao la: ");
	for(i = 0; i <= n; i++){
		if(ktshh(a[i])==1){
		    printf("%d ", a[i]);
   	 	}
    }
}


int main(){
    int arr[100];
    int n;
    printf("\nNhap so luong phan tu: ");
    scanf("%d", &n);
    NhapMang(arr, n);
    xuatSoHoanHao(arr, n);

}
