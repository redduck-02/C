#include<stdio.h>
#include<string.h>

typedef struct sach
{
    char TenSach[100];
    char TacGia[100];
    int NamXB;
} s;

void Nhap(sach &s1)
{
    fflush(stdin);
    printf("Nhap ten sach: ");
    gets(s1.TenSach);
    fflush(stdin);
    printf("Nhap ten tac gia: ");
    gets(s1.TacGia);
    printf("Nhap nam xuat ban: ");
    scanf("%d", &s1.NamXB);
}

void NhapDS(sach s1[], int &n)
{
    printf("Nhap so luong: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Nhap du lieu sach thu %d\n", i);
        Nhap(s1[i]);
    }
}

void Xuat(sach s1)
{
    printf("\nTen sach: %s", s1.TenSach);
    printf("\nTen tac gia la: %s", s1.TacGia);
    printf("\nNam xuat ban: %d", s1.NamXB);
}

void XuatDS(sach s1[], int n)
{
    for(int i = 0; i < n; i++)
    {
        Xuat(s1[i]);
    }
}

int DemTG(sach s[], int n)
{
    char Ten[50];
    int dem = 0;
    fflush(stdin);
    printf("Nhap vao ten tac gia can tim: ");
    gets(Ten);
    for(int i = 0; i < n; i++)
    {
        if(strcmp(Ten,s[i].TacGia)==0)
            dem++;
    }
    return dem;
}

void ThongKe(sach s[], int n)
{
    int dem = 0;
    printf("Thong tin sach nam %d: \n", s[0].NamXB);
    for(int i = 0; i < n; i++)
    {
        Xuat(s[i]);
        dem++;
        if(s[i+1].NamXB!=s[i].NamXB)
        {
            printf("\t** Nam %d co %d quyen sach\n", s[i].NamXB, dem);
            dem = 0;
            if(i < n-1)
                printf("\nThong tin sach nam %d", s[i+1].NamXB);
        }
    }
}

void Menu()
{
    int chon, flat = 1;
    while(flat)
    {
        printf("1. Nhap danh sach\n");
        printf("2. Xuat danh sach\n");
        printf("3. Dem so sach cung tac gia\n");
        printf("4. Thong ke sach theo nam xuat ban\n");
        printf("5. Thoat.\n");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
                struct sach a[100];
                int n;
                NhapDS(a,n);
                break;
            case 2:
                XuatDS(a,n);
                break;
            case 3:
                printf("Co %d quyen cua tac gia can tim", DemTG(a,n));
                break;
            case 4:
                ThongKe(a,n);
                break;
            case 5:
                flat = 0;
        }
    }
}

int main()
{
    Menu();
}