#include<stdio.h>
int main()
{
  int a[5];
  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;
  int *p = a; //p -> a[0] or (a + 0)
  //i = 0 -> *(p + 0) -> In giá trị a[0]
  //i = 1 -> *(p + 0) -> In giá trị a[1]
  //i = 2 -> *(p + 0) -> In giá trị a[2]
  //i = 3 -> *(p + 0) -> In giá trị a[3]
  //i = 4 -> *(p + 0) -> In giá trị a[4]
  //*(p + i) = a[i]
  for(int i = 0; i < 5; i++)
  {
    printf("\n%d", *(p+i));
  }
  return 0;
}
