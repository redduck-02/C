#include <stdio.h>
int main(){
    printf("Nhap gia tri x: ");

    int x = 5;
    printf("Gia tri cua x la: ", x);

    float x1 = 3.1455555555555;
    printf("\nNhap gia tri x1 : %f", x1);
    
    printf("\nGia tri cua x1 la : %.2f", x1);

    float x2 = 5.6;
    float x3 = 2.7;
    printf("\nx2 = %.2f, x3 = %.2f", x2, x3);

    char c = 'A', chuoi = 'ABCDE';
    printf("\n %c", c);
    printf("\n %s", chuoi);
}
