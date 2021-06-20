//Way 1
#include<stdio.h>
void Enter(int arr[], int &n)
{
    printf("Enter n: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter value for arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

int max_Array(int arr[], int n)
{
    int max = arr[0], i;
    
    for(i = 1; i < n; i++)
    {
        if(arr[i] == 0)
        {
        max = arr[i];
        } else if(arr[i] > max)
            {
            max = arr[i];
            }
    }
return max;
}

int min_Array(int arr[], int n)
{
    int min = arr[0], i;
    for(i = 1; i < n; i++)
    {
        if(arr[i] == 0)
        {
        min = arr[i];
        } else if(arr[i] < min)
            {
            min = arr[i];
            }
    }
return min;
}

int main()
{
    int arr[100], n;
    Enter(arr,n);
    printf("\nMax value in array is: %d", max_Array(arr,n));
    printf("\nMin value in array is: %d", min_Array(arr,n));

    return 0;
}

//Way 2
/*#include<stdio.h>
	int main(){

	int a, b, min, max;

	printf("Input a: ");
	scanf("%d", &a);
	printf("Input b: ");
	scanf("%d", &b);

	min = (a>b)?b:a;
	max = (a>b)?a:b;

	printf("\nMax is %d", max);
	printf("\nMin is %d", min);

return 0;*/