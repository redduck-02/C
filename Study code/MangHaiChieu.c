#include<stdio.h>
int main(){
  //a[sohangtoida][socottoida]
  int a[3][3];
  int i, j;
  for(i = 0; i<3; i++){
    for(j = 0; j<3; j++){
      printf("Hay nhap gia tri: \n");
      scanf("%d", &a[i][j]);
    }
  }
  printf("Mang sau khi nhap: \n");
  for(i = 0; i<3; i++){
    for(j = 0; j<3; j++){
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }
  return 0;
}
