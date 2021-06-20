/*Viết chương trình nhập vào một dãy điểm trên mặt phẳng tọa độ x0y và thực hiện:
- Tính độ dài đường gấp khúc lần lượt đi qua các điểm 1, 2,..n.
- Tìm các điểm xa trục hoành nhất.
- Đếm và in các đoạn cắt trục tung.*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct toado{
    float x,y;
};

void nhapDiem(toado &D){
    printf("\nToa do x: ");
    scanf("%f", &D.x);
    printf("Toa do y: ");
    scanf("%f", &D.y);
}

void nhapDay(toado *h, int &n){
    for(int i = 0; i < n; i++){
        printf("Nhap toa do diem A%d", i+1);
        nhapDiem(*(h+i));
        printf("-----------------------------\n");
    }
}

void xuatDay(toado *h, int n){
    for(int i = 0; i < n; i++){
        printf("Toa do diem A%d(%0.2f,%0.2f)\n", i+1, (h+i)->x, (h+i)->y);
    }
}

//Do dai = √(x1-x2)^2 + (y1-y2)^2
float tinhDodai(toado *h, int n){
    float S = 0;
    for(int i = 1; i < n; i++){
        float u = ((h+i+1)->x) - ((h+i)->x);
        float v = ((h+i+1)->y) - ((h+i)->y);
        S += sqrt(pow(u,2)+pow(v,2));
    }
    return S;
}


//Ox càng lớn thì càng xa
//Tìm giá trị x lớn nhất
void xaOx(toado *h, int n){
    int xMax = h->x;
    for(int i = 0; i < n; i++){
        if(xMax < ((h+i)->x)){
            xMax = ((h+i)->x);
        }
    }
    for(int j = 0; j < n; j++){
        if(xMax == ((h+j)->x)){
            printf("\nToa do diem xa truc hoanh nhat la A%d(%.2f,%.2f)"
                                            ,j+1, (h+j)->x, (h+j)->y);
        }
    }
}

//Cắt trục tung khi x1*x2<0 & |x1+x2>0|
void doancat(toado *h, int n){
    int k = 0;
    for(int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if((((h+i)->x)*((h+j)->x))<=0&&(fabs(((h+i)->x))+fabs(((h+j)->x)))>0){
				printf("\nDoan chua cat truc tung chua hai diem A%d(%0.2f,%0.2f) va A%d(%0.2f,%0.2f)", i+1, (h+i)->x, (h+i)->y, j+1, (h+j)->x, (h+j)->y);
				k++;
			}
		}
	}
    for(int i = 0; i < n; i++){
        for(int j = i+1; i < n; i++){
            if(((h+i)->x)*((h+j)->x) <= 0 && (fabs((h+i)->x))+fabs((h+j)->x)) > 0){
                printf("Doan cat truc tung tai hai diem A%d(%0.2f,%0.2f) va A%d(%0.2f,%0.2f)\n",i+1, (h+i)->x, (h+i)->y,j+1, (h+j)->x, (h+j)->y);
                k++;
            }
        }
    }
    if(k == 0) printf("Khong co doan nao cat truc tung\n");
    if(k > 0) printf("Co %d doan cat truc tung\n", k);
}

int main(){
    int n;
    toado D;
    printf("Nhap so diem ban muon tao: ");
    scanf("%d", &n);
    toado *h = (toado*)malloc(n*sizeof(toado));
    nhapDay(h,n);
    xuatDay(h,n);
    printf("Do dai duong gap khuc la %.2f", tinhDodai(h,n));
    xaOx(h,n);
    doancat(h,n);
    return 0;
}