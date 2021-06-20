#include<stdio.h>
int main(){
  char ten[100];
  int tuoi;
  printf("Nhap tuoi: ");
  scanf("%d", &tuoi);
  printf("Nhap ten: ");
  fflush(stdin);
  gets(ten);
  printf("\nThong tin sinh vien\n");
  printf("Tuoi: %d", tuoi);
  printf("\nTen: %s", ten);
}
