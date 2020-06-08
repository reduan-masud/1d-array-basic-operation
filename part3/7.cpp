#include <stdio.h>

int main()
{

	int arr[10000];
	int n; 

	printf("Enter the size of array: \n");
	scanf("%d", &n);

	printf("Enter %d element seperaed by space \n", n);
	for(int i = 0; i<n; i++)
		scanf("%d", &arr[i]);
	int k;
	printf("Enter the index num where you want to split\n");
	scanf("%d", &k);
	
	int _arr[n-k];
	int j = 0;
	for(int i = k; i < n; i++)
	{
		_arr[j++] = arr[i];
	}	
	
	
	//n = n-(n-k);
	
	for(int i = 0; i < k; i++) printf("%d ", arr[i]);
	printf("\n");
	for(int i = 0; i < j; i++) printf("%d ", _arr[i]); 
	printf("\n");
	return 0;
}
