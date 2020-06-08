#include <stdio.h>

int main()
{

	int arr1[1000];
	int arr2[1000];
	int n; 

	printf("How many element you want to insert\n");
	scanf("%d", &n);
	int arr[n*2];

	printf("Enter %d elements seperated by space\n",n);
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr1[i]);

	printf("Enter %d elements seperated by space\n",n);
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr2[i]);
	int a = 0, b = 0;
	for(int i = 0; i<2*n; i++)
	{
		if(arr1[a] <= arr2[b])
			if(a < n) arr[i] = arr1[a++];
			else arr[i] = arr2[b++];
		else
			if(b < n) arr[i] = arr2[b++];
			else arr[i] = arr1[a++];

	}
	

	printf("Printing Marging array\n");
	for(auto &a: arr) printf("%d ", a);	
	printf("\n");
	return 0;
}
