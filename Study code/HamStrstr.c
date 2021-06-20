#include<stdio.h>
#include<string.h>
int main(){
  char s[100], s1[100];
  printf("Nhap chuoi cho s: ");
  gets(s);
  printf("Nhap chuoi cho s1: ");
  gets(s1);

  if(strstr(s,s1) == NULL){
    printf("%s khong co trong %s", s1, s);
  } else{
    printf("%s co trong %s", s1, s);
  }

  return 0;
}
