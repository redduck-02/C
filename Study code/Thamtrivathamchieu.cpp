//Viết hàm hoán vị 2 số
#include<stdio.h>
void Hoanvi(int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}

void tang(int &n){
  n++;
}

int main(){
  int first, second;

  printf("Nhap first: ");
  scanf("%d", &first);
  printf("Nhap second: ");
  scanf("%d", &second);

  printf("First = %d, Second = %d", first, second);
  Hoanvi(first,second);
  tang(first);
  tang(second);
  printf("\nHoan vi");
  printf("\nFirst = %d, Second = %d", first, second);

  return 0;
}
