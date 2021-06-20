#include<stdio.h>
int main()
{
	int array[10], n;
	printf("Enter the quantity for the array: \n");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Enter value: \n");
		scanf("%d", &array[i]);
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d\t\n", array[i]);	}
	return 0;
}