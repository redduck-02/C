#include<stdio.h>
int main(){
    int a[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the value for matrix: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("The value of the matrix: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}