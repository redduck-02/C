#include <stdio.h>
int SumAllDigit(int n){
	if(n < 10)
		return n;
	else
		return n % 10 + SumAllDigit(n/10);
}

int main(){
	int result = SumAllDigit(99999);
	printf("%d\n", result);
	return 0;
}