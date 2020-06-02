#include <stdio.h>

int main()
{

	int arr[10000];
	int n; 

	printf("Enter the size of array:(size should be > 6) \n ");
	scanf("%d", &n);

	printf("Enter elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr[i]);
	
	printf("Enter a value : ");
	int x;
	scanf("%d", &x);

	arr[5] = x;

	for(int i = 0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
