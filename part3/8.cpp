#include <stdio.h>

int main()
{

	int arr[10000];
	int n; 

	printf("Enter the size of array: ");
	scanf("%d", &n);

	printf("Enter elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr[i]);

	arr[n] = arr[0];
	for(int i = 0; i<n; i++) arr[i] = arr[i+1];

	printf("Printing permuted array\n");
	for(int i = 0; i<n; i++) printf("%d ", arr[i]);

	printf("\n");
	return 0;
}
