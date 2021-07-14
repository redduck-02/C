#include<stdio.h>
int main()
{
    int n, k, count = 0, arr[100];
    printf("Enter the quantity of the array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter value of arr[%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == k) count++;
    }
    printf("The quantity of %d: %d", k, count);
}