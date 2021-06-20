/*Viết các hàm sau làm việc với dãy số có sử dụng cấp phát bộ nhớ động
cho mảng thông qua toán tử new hoặc hàm calloc hay malloc,
có hàm nhập từ file nhị phân, file văn bản, xuất ra file nhị phân, văn bản
a. Hàm nhập vào một dãy n số thực từ bàn phím thỏa mãn:
- Mẫu hàm : void Nhap(int *n, float **a);
- Nhập n,cấp phát bộ nhớ cho con trỏ (VD: *a = new float [n+1];)
- Truyền giá trị của n và a ra thông qua tham chiếu con trỏ
b. Hàm nhập vào một dãy n số thực từ file văn bản thỏa mãn:
- Mẫu hàm : void NhapFileVB(int &amp;n, float *&amp;a, char *fname);
- File văn bản có tên fname cho trước gồm dòng thứ 1 ghi n sau đó là
n phần tử thực cách nhau bởi các khoảng cách.
- Đọc n, cấp phát bộ nhớ cho con trỏ (VD: a = new float [n+1];)
- Truyền giá trị của n và a ra thông qua tham chiếu con trỏ
c. Hàm nhập vào một dãy n số thực từ file nhị phân thỏa mãn:
- Mẫu hàm : void NhapFileNP(int &amp;n, float *&amp;a, char *fname);
- File nhị phân cho trước gồm dữ liệu liên tục của số phần tử n
là số nguyên và n số tiếp theo là dữ liệu của các số thực (đọc bằng fread)
- Đọc n, cấp phát bộ nhớ cho con trỏ (VD: a = new float [n+1];)
- Truyền giá trị của n và a ra thông qua tham chiếu con trỏ
d. Hàm xuất vào dãy n số thực ra màn hình thỏa mãn:
- Mẫu hàm : void XuatMH(int n, float *a);
e. Hàm xuất dãy n số thực vào file văn bản thỏa mãn:
- Mẫu hàm : void XuatFileVB(int n, float *a, char *fname);
- Ghi ra file văn bản có tên fname dòng thứ 1 ghi n sau đó là n
phần tử thực cách nhau bởi các khoảng cách.
f. Hàm xuất vào dãy n số thực ra file nhị phân thỏa mãn:
- Mẫu hàm : void XuatFileNP(int n, float *a, char *fname);
- Ghi ra file nhị phân gồm dữ liệu liên tục của số phần tử n
là số nguyên và n số tiếp theo là dữ liệu của các số thực (ghi bằng fwrite)
a. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…6]
1. Nhập dãy a từ bàn phím

2. Xuất dãy a ra file văn bản
3. Xuất dãy a ra file nhị phân
4. Đọc dãy từ file văn bản xuất ra màn hình
5. Đọc dãy từ file nhị phân xuất ra màn hình
6. Thoát */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include <conio.h>
struct nhansu{
	char hoten[100];
	char chucvu[100];
	float hesoluong;
}; 
void nhaptv(nhansu *tv,int &n){
	printf("nhap so sach ban can quan ly : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("nhap nhap thong tin nhan su %d",i+1);
		fflush(stdin);
		printf("\nnhap ho ten : ");
		fgets((tv+i)->hoten,sizeof((tv+i)->hoten),stdin);
		fflush(stdin);
		printf("\nnhap chuc vu:");
		fgets((tv+i)->chucvu,sizeof((tv+i)->chucvu),stdin);
		fflush(stdin);
		printf("\nhe so luong : ");
		scanf("%f",&(tv+i)->hesoluong);
		printf("\n__________________________________________________________________________________\n");
	}
}
void xuattv(nhansu *tv,int n){
	for(int i=0;i<n;i++){
		printf("nhan vien thu %d :",i+1);
		printf("\nho ten : %s",(tv+i)->hoten);
		printf("\nchuc vu: %s",(tv+i)->chucvu);
		printf("he so luong :%0.2f",(tv+i)->hesoluong);
		printf("\n__________________________________________________________________________________\n");
	}
}
void xoaXuongDong(char x[]){
	size_t len = strlen(x);
	if(x[len-1]=='\n'){
		x[len-1]='\0';
	}
}
void xuatvaofile(nhansu *tv, int n){
	char tenfile[50];
	printf("\nnhap ten file.dia chi ban muon truyen vao: ");
	fflush(stdin);fgets(tenfile,sizeof(tenfile),stdin);xoaXuongDong(tenfile);
	FILE *f;
	f = fopen(tenfile,"wb");
	if(f==NULL){
	printf("loi mo file de ghi!!!!!!");
	exit(1);
	}
	fwrite(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++){
		fwrite((tv+i),sizeof(nhansu),1,f);
	}
	fclose(f);
	
}
void nhaptufile(nhansu *tv,int &n){
	char tenfile[50];
	printf("\nnhap ten file.dia chi ban muon truyen vao: ");
	fflush(stdin);fgets(tenfile,sizeof(tenfile),stdin);xoaXuongDong(tenfile);
	FILE *f;
	f = fopen(tenfile,"rb");
	if(f==NULL){
	printf("loi mo file de doc!!!!!!");
	exit(1);
	}
	fread(&n,sizeof(n),1,f);
	for(int i=0;i<n;i++){
		fread((tv+i),sizeof(nhansu),1,f);
		}
	fclose(f);
	
}

int main(){
	int n;
	int d[100];
	nhansu *tv=(nhansu*)malloc(n*sizeof(nhansu));
	bool DaNhap = false;
	int chon;
	while(true){
		system("cls");
		printf("\n*=======================CHUONG TRINH QUAN LY KHO HANG=========================*");
		printf("\n==                                                                           ==");
		printf("\n==                1.Nhap Danh sach nhan vien                                 ==");
		printf("\n==                2.xuat danh sach nhan vien                                 ==");
		printf("\n==                3.nhap vao file nhi phan                                   ==");
		printf("\n==                4.Xuat tu file nhi phan ra                                 ==");
		printf("\n==                5.thoat chuong trinh                                       ==");
		printf("\n*=============================================================================*\n");
		printf("NHAP LUA CHON CUA BAN: ");
		scanf("%d",&chon);
		switch(chon){
			case 1:
				nhaptv(tv,n);
				DaNhap=true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 2:
				if(DaNhap){
					xuattv(tv,n);
				} else printf("\nBan chua nhap danh sach gio hang!!!!!!!!!!!!!!!!");
				
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 3:
				if(DaNhap){
					xuatvaofile(tv,n);
				} else printf("\nBan chua nhap danh sach gio hang!!!!!!!!!!!!!!!!");
				
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 4:
				nhaptufile(tv,n);
				DaNhap=true;
				printf("\nBam phim bat ky de tiep tuc!");
				getch();
				break;
			case 5:
                printf("\nBan da chon thoat chuong trinh!");
                getch();
                return 0;
            default:
                printf("\nKhong co chuc nang nay!");
                getch();
                break;
            	}		
	} 
	
}
