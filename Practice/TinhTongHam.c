#include<stdio.h>
void Tong(int a, int b){
  printf("%d", a + b);
}

int Tong1(int a, int b){
  int tong = a + b;
  return tong;
}

int main(){
  int tinhtong = Tong1(2,4);
  printf("%d", tinhtong);
  return 0;
}
