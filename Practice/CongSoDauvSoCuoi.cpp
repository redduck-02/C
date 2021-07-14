#include<stdio.h>
int main() {
    int n, a[100];
    int S = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        S = a[0] + a[i];
    }
    printf("%d", S);
    return 0;
}