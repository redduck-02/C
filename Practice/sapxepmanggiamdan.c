#include <stdio.h>
 
int main(){
    int a[100];
    int n;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++)
	{
        printf("\nNhap a[%d] = ",i);
        scanf("%d", &a[i]);
    }
    
    int ts;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                
                ts = a[i];
                a[i] = a[j];
                a[j] = ts;        
            }
        }
    }
    
    
    printf("\nMang da sap xep la: ");
    for(int i = 0; i < n; i++){
        printf("%3d", a[i]);
    }
}

