#include<stdio.h>
int main(){
    int n, c = 00;
    float a[100];
    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Nhap a[] : \n");
    for(int i=0; i<n ;i++){
        scanf("%f", &a[i]);
    }

    for(int i=0; i<n ;i++){
        if(a[i]>=0){
            c++;
        }
    }
    printf("\nSo phan tu duong: %d\n", c);
    
    return 0;
}