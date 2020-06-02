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
	
	printf("Enter a value want to search: ");
	int x; 
	scanf("%d", &x);
	
	int f = -1;
	int idx = -1;
	for(int i = 0; i< n; i++)
	{
		if(x == arr[i])
		{
			f = 1;
			idx = i;
			break;
		}
	}

	if(f) printf("%d\n", idx);
	else printf("-1\n");

	
	
	//for(int i = 0; i<n; i++)
	//	printf("%d ", arr[i]);
	//printf("\n");

	return 0;
}
