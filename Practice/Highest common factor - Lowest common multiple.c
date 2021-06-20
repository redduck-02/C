#Way 1
#include<stdio.h>
	int main(){
	
	int a, b;	
		
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);
	
	if(a >=0 && b>=0){
		if(a==0 && b==0){
			printf("Highest Common Factor doesn't exist");
		} else if(a==0 || b==0){
			printf("Highest Common Factor is %d", (a==0)?b:a);
		} else{
			while(a!=b){
				if(a>b){
					a=a-b;
				} else{
					b=b-a;
				}
			}
			printf("Highest Common Factor is %d", a);
		}
		}
		else{
		printf("Input a, b > 0");
		}
	}
	
	
	

#Way 2
#include<stdio.h>
int HCF(int a, int b){
	if(b==0) return a;
	return HCF(b, a%b);
}

int LCM(int a, int b) {
    return (a * b) / HCF(a, b);
}
 

int main(){
	int a, b;
	
	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);
	
	printf("Highest Common Factor of %d and %d is %d", a, b, HCF(a, b));
	printf("\nLowest Common Multiple of %d and %d is %d", a, b, LCM(a, b));
	
return 0;	
}
