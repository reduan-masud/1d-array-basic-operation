#include <stdio.h>

int main()
{

	int arr[10000];
	int arr2[10000];
	int n; 

	printf("Enter the size of array: ");
	scanf("%d", &n);

	printf("Enter elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr[i]);

	for(int i = 0; i < n; i++) arr2[i] = arr[i];

	printf("Copied to array 2 complete...\n");

	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}
