#include<stdio.h>
#include<string.h>
int main(){
  char s[100], s1[100];
  printf("Nhap chuoi s: ");
  gets(s);
  printf("Nhap chuoi s1: ");
  gets(s1);
  strcat(s,s1);
  printf("Chuoi noi: %s", s);
  return 0;
}
