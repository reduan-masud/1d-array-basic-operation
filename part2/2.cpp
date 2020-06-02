#include <stdio.h>

int main()
{
	int arr[1000];
	int i = 0;
	for(i = 0; i<10; i++)
		arr[i] = i;
	
	int x; 
	printf("Enter number want to insert");
	printf("\n");
	scanf("%d", &x);
	arr[i] = x;
	i++;

	for(int j = 0; j < i; j++)
		printf("%d ", arr[j]);
	printf("\n");

	return 0;
}
