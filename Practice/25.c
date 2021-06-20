#include<stdio.h>
#include<math.h>
int ktsnt(int x){
	if(x<=1) return 0;
	for(int j=2; j<=sqrt(x); j++){
		if(x%j==0) return 0;
	}
		return 1;
}

int main(){
	int n, kt;
	
	do{
	printf("Nhap vao n: ");
	scanf("%d", &n);
	} while(n<1);

	for(int i=2; i<=n; i++){
		kt = ktsnt(i);
		if(kt){
			printf("%d ", i);
		}
	}
}

































