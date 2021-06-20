#include<stdio.h>
int main(){
	
	int month, year;
	
	printf("Input month: ");
	scanf("%d", &month);
	printf("Input year: ");
	scanf("%d", &year);
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12: 
			printf("Have 31 days");
			break;
		
		case 4:
		case 6:
		case 9:
		case 11:
			printf("Have 30 days");
			break;
			
		case 2:
			if((year%400==0) || (year%4==0 && year%100!=0)){
				printf("Have 28 days");		
			} else{
				printf("Have 29 days");
			}
			break;
			
		default:
		printf("Error");
	}
	
return 0;		
}
