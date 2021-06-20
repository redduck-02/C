#include<stdio.h>
void NM(int a[], int *n){
	int i;
	printf("Nhap so luong phan tu: ");
	scanf("%d",&n);
    for(i=0;i<n;i++)
     {
     	printf("\nNhap cac phan tu cho a[%d]: \n", i);
        scanf("%d",&a[i]);
     }
     return;
}

     
int ktshh(int n){
	int tong = 0;
	int i;
	for(i = 1; i<n; i++){
		if(n%i==0){
			tong = tong + i;
		}
	}
	if(tong == n){
		return 1;
	}
	return 0;
}


int main(){
	int n, i;
	int a[100];
	NM(a,n);
	
    for(i=0;i<n;i++){
    	if(ktshh(n)==1){
    printf("%d\t",a[i]);
		}
	}
	
return 0;
}

