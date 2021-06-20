/*Xây dựng hàm:
- Nhập 1 đa thức bâc m
- In đa thức bậc m
- Tính giá trị của đa thức tại số thực d
- Tính tổng 2 đa thức
- Ứng dụng các hàm trên vào việc thực hiện nhập vào 2 đa thức Pm, Qn.
In lên mà hình đa thức vừa nhập P, Q và đa thức tổng R=P+Q.
Tìm giá trị của P(x1)+Q(x2); x1, x2 là 2 số thực nhập từ bàn phím.*/

#include<stdio.h>
#include<math.h>
void nhapdt(float A[], int n){
	for(int i=n;i>=0;i--){
		printf("a*x^%d: ",i);
		scanf("%f",&A[i]);
	}
}
void xuatdt(float A[], int n){
	for(int i=n;i>0;i--)
		printf("%.1f*x^%d + ",A[i],i);
		printf("%.1f",A[0]);	
}
float tinhgt(float A[], int n, float x){
	float s=0;
	for(int i=n;i>=0;i--)
	    s=s+A[i]*pow(x,i);
	return s;    
}
float tongdt(float A[], int n, float x, float kq1, float kq2){
			return kq1+kq2;	
}
int main(){
	float A[100],kq1,kq2,x,dh1,dh2;
	int n;
	printf("Nhap so bac da thuc A: ");
	scanf("%d",&n);
	nhapdt(A,n);
	printf("\nDa thuc vua nhap la: ");
	xuatdt(A,n);
	printf("\nNhap x: ");
	scanf("%f",&x);
	kq1=tinhgt(A,n,x);
	printf("\nGia tri A tai x la: %.2f",kq1);	
	printf("\nNhap so bac da thuc B: ");
	scanf("%d",&n);
	nhapdt(A,n);
	printf("\nDa thuc vua nhap la: ");
	xuatdt(A,n);
	printf("\nNhap x: ");
	scanf("%f",&x);
	kq2=tinhgt(A,n,x);
	printf("\nGia tri B tai x la: %.2f",kq2);	
	printf("\nGia tri tong da thuc la: %.2f",tongdt(A,n,x,kq1,kq2));	
}


