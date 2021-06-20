#include<stdio.h>
	int main(){
	
	int a, b;
	 
		printf("Input a, b: ");
		scanf("%d%d", &a, &b);
		
		float result = (float)a/b;
		int result2 = (int)result;
		
		printf("The result is: %d/%d=%.2f", a, b, result);	
		printf("\nThe result 2 is: %d", result2);
		
		
return 0;		
	}
