#include<stdio.h>
	int main(){
		
	int n, total=0;	
	
	printf("Enter the quantity for the array: ");
	scanf("%d", &n);
	
	int a[n];
	int i;
	for(i=0; i<n; i++){
		printf("Enter the value for the array: ");
		scanf("%d", &a[i]);
		total = total + a[i];
	}
		
	float result = (float)total/n;
	printf("Average Value is %.2f", result);		

}
