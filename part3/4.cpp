#include <stdio.h>

int main()
{

	int arr1[10000];
	int arr2[10000];
	int n  = 10; 

	printf("Enter 10 elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr1[i]);

	printf("Enter 10 elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr2[i]);
	
	int diff = 0;
	for(int i = 0; i<n; i++)
		if(arr1[i] != arr2[i]) diff++;
	if(!diff)
		printf("Both array is same");
	else
		printf("There are %d difference bewteen two array", diff);


	printf("\n");
	return 0;
}
