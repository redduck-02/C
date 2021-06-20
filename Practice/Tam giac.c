#include<stdio.h>
#include<math.h>
int main(){
	
float xa, xb, xc, ya, yb, yc, C, S, p, AB, AC, BC;
	
printf("Nhap toa do diem A: ");
scanf("%f%f", &xa, &xb);
printf("Nhap toa do diem B: ");
scanf("%f%f", &xb, &yb);
printf("Nhap toa do diem C: ");
scanf("%f%f", &xc, &yc);
	
AB = sqrt(pow((xa-xb),2)+pow((ya-yb),2));
AC = sqrt(pow((xa-xc),2)+pow((ya-yc),2));
BC = sqrt(pow((xb-xc),2)+pow((yb-yc),2));
	
C = AB + AC + BC;
p = C/2;
S = sqrt(p*(p-AB)*(p-AC)*(p-BC));
	
	
if((AB+BC>AC) && (AB+AC>BC) && (BC+AC>AB)){
	if(AB == BC || AB == AC || BC == AC){
		printf("Day la tam giac can\n");
		
	} else{
		printf("Day khong phai tam giac can\n");
		
	}
		printf("Chu vi tam giac la: %.2f\n", C);
		printf("Dien tich tam giac la: %.2f\n", S);
	
} else{
	printf("Day khong phai la tam giac\n");
}
	

	
return 0;	
	}
