#include <stdio.h>
int main(){
    int x; 
    float y; 
    char c; 

    //Nhap vao ki tu
    printf("Nhap vao ky tu: ");
    scanf("%c", &c);
    printf("\nKi tu da nhap la: %c", c);
    
	//Nhap vao so nguyen
    printf("\n\nNhap vao gia tri cua x: ");
    scanf("%d", &x);
    printf("\nGia tri cua x da nhap la: %d", x);
    
    //Nhap vao so thuc
    printf("\n\nNhap vao so thuc y: ");
    scanf("%f", &y);
    printf("\nGia tri cua y da nhap la: %.2f", y);
    
    //Nhap nhieu du lieu cung 1 hang
    float x1, x2, x3;
    printf("\nNhap gia tri cua x1, x2, x3: ");
    scanf("%f%f%f", &x1, &x2, &x3);
    printf("x1 = %.2f, x2 = %.2f, x3 = %.2f", x1, x2, x3);
}
