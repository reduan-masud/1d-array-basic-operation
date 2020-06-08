#include <stdio.h>

int main()
{

	int arr1[10];
	int arr2[10];
	int n  = 5; 

	printf("Enter 5 elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr1[i]);

	printf("Enter 5 elements seperated by space\n");
	for(int i = 0; i<n; i++)
	       	scanf("%d", &arr2[i]);
	
	for(int i = n; i < 2*n; i++)
		arr1[i] = arr2[i-n];


	printf("Printing Marging array\n");
	for(auto &a: arr1) printf("%d ", a);	
	printf("\n");
	return 0;
}
