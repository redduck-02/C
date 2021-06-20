/*Viết chương trình nhập vào một dãy điểm trên mặt phẳng tọa độ x0y và thực hiện:
- Tính độ dài đường gấp khúc lần lượt đi qua các điểm 1, 2,..n.
- Tìm các điểm xa trục hoành nhất.
- Đếm và in các đoạn cắt trục tung.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct toado{
	float x, y;
};

void nhapdiem(toado &dd){
	printf("Nhap vao toa do diem x: \n"); scanf("%f", &dd.x);
	printf("Nhap vao toa do diem y: \n"); scanf("%f", &dd.y);
}

void nhapdaydiem(toado *h, int &n){
	for(int i = 0; i < n; i++){
		printf("Nhap toa do diem A%d: \n", i+1);
		nhapdiem(*(h+i));
		printf("\n_____________________________________________________________________\n");
	}
}

void xuatdaydiem(toado *h,int n){
	for(int i = 0; i < n; i++){
	printf("Toa do diem A%d(%0.2f,%0.2f): ",i+1,(h+i)->x,(h+i)->y);
	}
}

//Do dai = √(x1-x2)^2 + (y1-y2)^2
float tinhdodai(toado *h, int n){
	float s=0;
	for(int i=0;i<n;i++){
	float v = ((h+i+1)->x) - ((h+i)->x);
	float u = ((h+i+1)->y) - ((h+i)->y);	
	s += sqrt(u*u+v*v);
	}
	return s;
}

void timdiemxax(toado *h,int n){
	int a = h->x;
	for(int i=0;i<n;i++){	
		if(a<((h+i)->x)){
			a=((h+i)->x);
		}
	}
	for(int j=0;j<n;j++){
		if(a==((h+j)->x)){
			printf("\nToa do diem co hoanh do lon nhat A%d(%0.2f,%0.2f)", j+1, (h+j)->x, (h+j)->y);
		}
	}
}

void doancatoy(toado *h,int n){
	int k=0;
	for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if((((h+i)->x)*((h+j)->x))<=0&&(fabs(((h+i)->x))+fabs(((h+j)->x)))>0){
				printf("\nDoan chua cat truc tung chua hai diem A%d(%0.2f,%0.2f) va A%d(%0.2f,%0.2f)", i+1, (h+i)->x, (h+i)->y, j+1, (h+j)->x, (h+j)->y);
				k++;
			}
		}
	}
	if(k==0) printf("\nKhong co doan nao cat truc tung!!!!!!");
	if(k>0)  printf("\nSo doan cat truc tung la %d",k);
	
}

int main(){
	int n;
	toado dd;
	printf("\nNhap so diem do ban muon tao: ");
	scanf("%d",&n);
	toado *h=(toado*)malloc(n*sizeof(toado));
	nhapdaydiem(h,n);
	xuatdaydiem(h,n);
	printf("\nDo dai duong gap khuc la :%0.2f",tinhdodai(h,n));
	timdiemxax(h,n);
	doancatoy(h,n);	
}
