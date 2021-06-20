#include<stdio.h>
#include<string.h>
int main(){
  char c[100];
  printf("Nhap chuoi: ");
  gets(c);
  int DoDai = strlen(c);
  printf("Do dai cua chuoi la: %d", DoDai);
  return 0;
}
