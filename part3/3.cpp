#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{

	int arr[10000];
	int n; 

	printf("Enter the size of array: ");
	scanf("%d", &n);

	printf("Enter elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr[i]);

	for(int i = 0; i<n; i++)
		for(int j = 0; j < n-i-1; j++)
			swap(&arr[j], &arr[j+1]);

	printf("Reversed Array ...\n");

	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
