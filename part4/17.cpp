#include <stdio.h>

int main()
{

    int arr1[1000], arr2[5];

    int arraySize = 10;
    printf("Enter 10 values saperated by space for array 1\n");
    for(int i = 0; i<arraySize; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter 5 values saperated by space for array 2\n");
    for(auto &i:arr2) scanf("%d", &i);

    int *l = arr1+10;
    arraySize += 5;
    int *siz = l+ 5;
    int *sarr = arr2;
    while(l < siz)
    {
        *l = *sarr;
        l++;
        sarr++;
    }

    for(int i = 0; i< arraySize; i++) printf("%d ", arr1[i]);
    printf("\n");

    return 0;
}
