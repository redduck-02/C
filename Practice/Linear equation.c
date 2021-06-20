//If a always different from 0
/*#include<stdio.h>
	int main(){
		
		float x, a, b;
		
		printf("Input a rate");
		printf("\nInput a: ");
		scanf("%f", &a);
		printf("Input b: ");
		scanf("%f", &b);
		
		x = -b/a;
		
		printf("x = %.2f", x); 
	}*/
	
	
//Include a equal 0 and a different from 0
#include<stdio.h>
	int main(){
		
		float x, a, b;
		
		printf("Enter a coefficient");
		printf("\nInput a: ");
		scanf("%f", &a);
		printf("Input b: ");
		scanf("%f", &b);
		
		
		if(a!=0){
			x = -b/a;
			printf("Root is: %.2f", x);
		}
		else{
			if(b==0){
				printf("Equations have many solutions");
			}
		else{
			printf("Equations have no solutions");
		}
}
return 0;		
	}		
		
		
		
		
		
		
		
		
		
		
		
		
		
