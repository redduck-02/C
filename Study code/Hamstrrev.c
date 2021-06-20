#include<stdio.h>
#include<string.h>
int main(){
  char c[100];
  printf("Nhap chuoi: ");
  gets(c);
  printf("Chuoi dao nguoc la: %s", strrev(c));
  return 0;
}
