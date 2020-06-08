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

	int j = 0;
	for(int i = n-1; i >= 0; i--) arr2[j++] = arr[i];

	printf("Reversed Array...\n");

	for(int i = 0; i < n; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
	return 0;
}
