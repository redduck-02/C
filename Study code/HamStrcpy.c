#include<stdio.h>
#include<string.h>
int main(){
  char s[100], s1[100];
  printf("Nhap chuoi: ");
  gets(s);
  strcpy(s1,s);
  printf("Noi dung cua s1 la %s", s1);
  return 0;
}
