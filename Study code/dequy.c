//De quy
#include<stdio.h>
int giaithua(int n){
	if(n<=1)
		return 1;
	else
		return n*giaithua(n-1);
}

int main(){
	giaithua(n);
}

//De quy de tinh tong S=1+2+3+
