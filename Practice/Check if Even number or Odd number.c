#include<stdio.h>
	int main(){
	
	int a;
	
	printf("Input a: ");
	scanf("%d", &a);
	
	printf("%d is %s", a, (a%2==0)?"Even Number":"Odd Number");
	
return 0;	
	}
