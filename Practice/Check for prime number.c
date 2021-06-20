#include<stdio.h>
#include<math.h>
	int main(){
		
    int n, i;
    
    printf("Input n = ");
    scanf("%d", &n);
    
    if(n < 2){
        printf("%d is not a prime number", n);
        return 0;
    }
    
    int count = 0;
    for(i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    
    if(count == 0){
        printf("%d is a prime number", n);
    }else{
        printf("%d is not a prime number", n);
    }
}


/*#Sample
#include<stdio.h>
int main(){
        int so, i, dem=0;
        printf("Nhap so can kiem tra: ");
        scanf("%d",&so);
        if(so<=1)
        	printf("Khong phai so nguyen to.");
        else{
        	for (i=2;i<so;i++) 
				if (so%i==0) 
					dem=dem+1;
		    if (dem==0) 
				 printf("So %d la so nguyen to",so); 
			else 
				printf("So %d khong phai la so nguyen to",so);
		}
	}*/
