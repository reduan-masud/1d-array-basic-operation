#include <stdio.h>

int main()
{

	int arr[100];

	int n; 
	printf("Enter Array Size: ");
	scanf("%d", &n);

	printf("Enter %d data saperated by space\n", n);
	for(int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	int x;
	printf("Enter a value want insert at third index: ");
	scanf("%d", &x);


	int temp, temp2;		
	temp = arr[3];
	arr[3] = x;

	for(int i = 4;  i<= n; i++)
	{
		temp2 = arr[i];
		arr[i] = temp;
		temp = temp2;;
	}

	n++;

	for(int i = 0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}

