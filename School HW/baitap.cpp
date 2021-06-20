#include<stdio.h>
#include<stdlib.h>

void Enter(int arr[], int &n)
{
    do
    {
	printf("Enter n: ");
	scanf("%d", &n);
	} while(n < 1);

    for(int i = 0; i < n; i++)
    {
        printf("Enter arr[%d] = ", i);
        scanf("%d", (arr+i));
    }
}

int check(int x){
	int count = 0, i;
	
	for(i = 1; i <= x; i++){
		if(x % i==0)
        {
			count++;
		}
	}
	if(count == 2){
		return 1;
	} else{
		return 0;
	}
}

int count(int *arr, int n)
{
    int count = 0;
    for(int i = 0; i < n; i++){
	if(check(*(arr+i))==1)
    {
        printf("\n%d", *(arr+i));
		count++;
	}
}
    return count;
}

void Output(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
    printf("\narr[%d] = %d\n", i, *(arr+i));
    }
}

int Sum(int *arr, int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += *(arr+i);
    }
    return sum;
}

int main()
{
    int *arr, n;
    arr = (int*)calloc(100, sizeof(int));
    Enter(arr,n);
    Output(arr,n);
    printf("Sum = %d", Sum(arr,n));
    printf("\nThe number of prime number in the array: %d\n", count(arr,n));
    
    return 0;   
}