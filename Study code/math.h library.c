#include<stdio.h>
#include<math.h>
int main(){
	
	int a = 5;
	int b = 2;
	
	float result = (float)a/b;
	
	printf("floor(a/b) = %.2f", floor(result));
	printf("\nceil(a/b) = %.2f", ceil(result));
	printf("\nsqrt(9)=%.2f", sqrt(9));
	printf("\n5^2 = %.2f", pow(5,2));
	printf("\n|5| = %d", abs(5));
	printf("\n|5.2| = %.2f", fabs(5.2));
	
	
return 0;	
	}
