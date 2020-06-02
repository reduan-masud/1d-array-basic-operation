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
	
	printf("Enter the index number (0 - %d):", n-1);
	int k;
	scanf("%d", &k);
	for(int i = k+1; i<= n; i++)
	{
		arr[i-1] = arr[i];
	}
	n--;

	for(int i = 0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
