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
	
	printf("Enter position and value seperated by space\n");
	int k, v;
	scanf("%d %d", &k, &v);

	int t1, t2;
	t1 = arr[k];
	arr[k] = v;
	for(int i = k+1; i<= n; i++)
	{
		t2 = arr[i];
		arr[i] = t1;
		t1 = t2;
	}
	n++;

	for(int i = 0; i<n; i++)
		printf("%d ", arr[i]);
	printf("\n");

	return 0;
}
