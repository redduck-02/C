//1. Bien luan ngay thang nam
//2. Sap xep danh sach sinh vien tang dan theo diem TB
//3. Sap xep theo ten (goi y ham: strcmp thuoc thu vien string.h)
//4. Kiem tra hoc bong cho sinh vien
//5. Dem so luong sinh vien co hoc luc gioi
//6. Tim kiem sinh vien theo ten
#include<stdio.h>
struct Date{
	int ngay, thang, nam;
};

struct SinhVien{
	char Ten[30];
	char MSSV[20];
	float DiemTB;
	struct Date NgaySinh;	
};

void NhapNgaySinh(struct Date &ns){
	printf("Nhap ngay: ");
	scanf("%d", &ns.ngay);
	printf("Nhap thang: ");
	scanf("%d", &ns.thang);
	printf("Nhap nam: ");
	scanf("%d", &ns.nam);
}

void XuatNgaySinh(struct Date ns){
	printf("Ngay sinh: %d/%d/%d", ns.ngay, ns.thang, ns.nam);
}

void Nhap(struct SinhVien &a){
	fflush(stdin);
	printf("Nhap ten sv1: ");
	gets(a.Ten);
	printf("Nhap MSSV: ");
	gets(a.MSSV);
	printf("Nhap diem TB: ");
	scanf("%f", &a.DiemTB);
	NhapNgaySinh(a.NgaySinh);
}

void Xuat(struct SinhVien a){
	printf("Ten SV: %s", a.Ten);
	printf("\nMSSV: %s", a.MSSV);
	printf("\nDiem TB cua SV: %.2f", a.DiemTB);
	printf("\nNgay sinh: ");
	XuatNgaySinh(a.NgaySinh);
}

void NhapDS(struct SinhVien a[], int n){
	for(int i = 0; i<n; i++){
		printf("Nhap sv %d: \n", i);
		Nhap(a[i]);
	}
}

int main(){
	struct SinhVien sv[10];
	int n=3;
	Nhap(a,n);
	Xuat(a,n);
}
