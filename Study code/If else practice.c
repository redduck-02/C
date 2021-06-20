#include<stdio.h>
int main(){
	//Input n, check if n < or > 20
	
/*	int n;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	if(n<20){
		printf("n less than 20");
	}*/
	
	
	//Input n, check if it is even number or odd number
	int n;
	
	printf("Input n: ");
	scanf("%d", &n);
	
	if(n%2==0){
		printf("This is even number");
	}
	else if(n%2==1){
		printf("This is odd number");
	}
	
return 0;	
}
