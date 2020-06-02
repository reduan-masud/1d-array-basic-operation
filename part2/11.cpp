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
	printf("Enter the value want to delete : ");
	int x;
	scanf("%d", &x);

	int f = 0;
	for(int i = 0; i< n; i++)
	{
		if(arr[i] == x)
		{
			for(int j = i+1; j<n; j++)
				arr[j-1] = arr[j];
			n--;
			f = 1;
		}

	};

	if(f)
	{
		for(int i = 0; i<n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	else
	{
		printf("Element Not Found\n");
	}

	return 0;
}
