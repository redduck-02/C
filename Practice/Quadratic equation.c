#include<stdio.h>
#include<math.h>

	int main(){
		float a, b, c, delta;
		float x, x1, x2;
		
		printf("Input a: "); scanf("%f", &a);
		printf("Input b: "); scanf("%f", &b);
		printf("Input c: "); scanf("%f", &c);
		printf("%.1fx^2 + %.1fx + %.1f\n", a, b, c);
		
		delta = pow(b,2) - 4*a*c;
		
		if(a==0)
			{
			x = -b/a;
			printf("x=%.2f", x);
			}
			
		else if(delta>0)
			{
			x1 = (-b+sqrt(delta))/2*a;
			x2 = (-b-sqrt(delta))/2*a;
			printf("x1 = %.2f, x2 = %.2f", x1, x2);
			}
				
		else if(delta=0)
			{
			x = -b/2*a;
			printf("x = %.2f", x);
			}
			
		else
			{
			printf("The equation has no solution");
			}
			
return 0;		
	}
	
	
/*#Sample
#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,delta,x,x1,x2;
	printf("Nhap a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	if(a==0){
		if(b==0){
			if(c==0)
				printf("PT vo so nghiem.");
			else
				printf("PT vo nghiem.");
		}
		else{
			x=-c/b;
			printf("PT co 1 nghiem la: %.2f",x);
		}
	}
	else{
		delta=b*b - 4*a*c;
		if(delta<0)
			printf("PT vo nghiem.");
		else if(delta==0){
			x=-b/(2*a);
			printf("PT co nghiem kep la: %.2f",x);
		}
		else{
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("PT co hai nghiem: x1=%.2f, x2=%.2f",x1,x2);
		}
	}
}*/	
