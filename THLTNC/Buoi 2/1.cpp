/*Viết các hàm sau làm việc với dãy số có sử dụng
cấp phát bộ nhớ động cho mảng thông qua toán tử
new hoặc hàm calloc hay malloc
a. Hàm nhập vào một dãy n số thực thỏa mãn:
- Mẫu hàm : int Nhap(float **a);
- Hàm trả về số phần tử nhập vào mảng
- Thân hàm cấp phát bộ nhớ cho con trỏ
(VD: *a = new float [n+1];)
b. Hàm tìm max của những phần tử dương (nếu có)
- Mẫu hàm : int MaxDuong(int n, float *a, float *max);
- Hàm trả về 0 nếu mảng không có số dương và 1 nếu ngược lại
- Truyền giá trị ra qua tham biến con trỏ float *max
c. Kiểm tra dãy vừa nhập có tính chất Fibonaccy không tức là
từ a3 trở đi đều phải bằng tổng 2 số đứng trước không
- Mẫu hàm : int Fibo(int n, float *a);
- Hàm trả về 0 nếu mảng không có tính chất và 1 nếu ngược lại
d. Viết hàm menu sau đó là hàm main thực hiện các thao tác
- Mẫu hàm : int Menu();
- Hàm trả về giá trị menu nếu được chọn trong [1…5]
1. Nhập dãy
2. Xuất dãy
3. Tìm max dương
4. Kiểm tra tính Fibonacci
5. Thoát */
#include <stdio.h>
#include <stdlib.h>

void Nhap(int &n, float *&a)
     {
      printf(" Nhap n = ");
      scanf("%d",&n);
      a = (float*)calloc(n,sizeof(float));
      
      for(int i = 0 ; i < n ; i++)
         {
           printf("a(%d)= ",i+1);
           scanf("%f",(a+i));
		 }
	 }

void NhapFileVB(int &n, float *&a, char *fname) 
     { FILE *pf;
     	pf = fopen(fname,"r");
     	if( pf == NULL)
     	  {
     	   fprintf(stderr,"Khong the mo FILE %s",pf);
			perror("Ly do: ");	
		  }
		fscanf(pf,"%d",&n);
		a = (float*)calloc(n,sizeof(float));
		for(int i = 0 ; i < n ; i ++)
		   {
		   	fscanf(pf,"%f",(a+i));
		   }
		fclose(pf);
	 }
void NhapFileNP(int &n, float *&a, char *fname)
     {
     	FILE *pf;
     		pf = fopen(fname,"rb");
     	if( pf == NULL)
     	  {
     	    fprintf(stderr,"Khong the mo FILE %s",pf);
			perror("Ly do: ");	
		  }
		fread(&n,sizeof(int),1,pf);
		a = (float*)calloc(n,sizeof(float));
		for(int i = 0 ; i < n ; i ++)
		   {
		   	fread((a+i),sizeof(float),1,pf);
		   }
		fclose(pf);
	 }
	 
void XuatMH(int n, float *a)
     {
     	printf("	DAY SO THUC: ");
     	for(int i = 0 ; i < n ; i++)
     	   {
     	    printf("%8.2f",*(a+i));	
		   }
		printf("\n");
	 }
	 
void XuatFileVB(int n, float *a, char *fname)
     {
     	FILE *pf;
     	pf = fopen(fname,"w");
     	if(pf == NULL)
     	  {
     	   fprintf(stderr,"Khong the mo file %s",fname);
		   perror("Ly do: ");	
		  }
		fprintf(pf,"%d",n);
		for(int i = 0 ; i < n ; i++)
		   {
		   	fprintf(pf," %.2f ",*(a+i));
		   }
		fclose(pf);
	 }

void XuatFileNP(int n, float *a, char *fname)
     {
     	FILE *pf;
     	pf = fopen(fname,"wb");
     	if(pf == NULL)
     	  {
     	   fprintf(stderr,"Khong the mo file %s",fname);
		   perror("Ly do: ");	
		  }
		   fwrite(&n,sizeof(int),1,pf);
		for(int i = 0 ; i < n ; i++)
		   {
		   	fwrite((a+i),sizeof(float),1,pf);
		   }
		fclose(pf);
	 }

int Menu()
    {
    	int x;
    	printf("1. Nhay day a tu ban phim\n2. Xuat day a ra file van ban\n3. Xuat day a ra file nhi phan\n4. Doc day tu file van ban xuat ra man hinh\n5. Doc day tu file nhi phan xuat ra man hinh\n6.Thoat");
    	printf("	CHON: ");
    	scanf("%d",&x);
    	return x;
	}
	
int main()
    {
    	float  *a;
    	int n,kt = 0, ktvb = 0, ktnp = 0;
    	char *name;
    	int choice;
    	name = (char*)calloc(50,sizeof(char));
    	while (1)
    	      {
    	      	choice = Menu();
    	      	switch(choice)
    	      	      {
    	      	       case 1:{
                               nhap: Nhap(n,a);    	      	       	
							   kt = 1;
						      } break;
					   case 2:{
						       vb:  if(kt == 0)
						           {
						           	printf("BAN CHUA NHAP DAY, VUI LONG NHAP!!!");
						           	goto nhap;
								   }
								printf("Ten file can xuat day: ");
								fflush(stdin);
								gets(name);
								XuatFileVB(n,a,name);
								ktvb = 1;
					          } break;	
					    case 3:{
						       np: if(kt == 0)
						           {
						           	puts("BAN CHUA NHAP DAY, VUI LONG NHAP!!!");
						           	goto nhap;
								   }
								printf("Ten file can xuat day: ");
								fflush(stdin);
								gets(name);
								XuatFileNP(n,a,name);
								ktnp = 1 ;
					          } break;
					    case 4:{
					    	   if(ktvb == 0)
					           {
					           	printf("CHUA XUAT DAY VAO FILE, VUI LONG NHAP!!!\n");
					           	goto vb;
							   }
								printf("Ten file can doc day: ");
								fflush(stdin);
								gets(name);
								NhapFileVB(n,a,name);
								XuatMH(n,a);
					          } break;
					    case 5:{
					    	   if(ktnp == 0)
					           {
					           	printf("CHUA XUAT DAY VAO FILE, VUI LONG NHAP!!!\n");
					           	goto np;
							   }
								printf("Ten file can doc day: ");
								fflush(stdin);
								gets(name);
								NhapFileNP(n,a,name);
								XuatMH(n,a);
					          } break;
					    case 6 : exit(1);
					    default: printf("NHAP SAI, NHAP LAI");
					  }
			  }
    	return 0;
	}
