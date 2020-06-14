#include <stdio.h>


int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = arr;
    int *ptrl = ptr+9;

    while(ptr < ptrl)
    {
        int p = *ptr;
        *ptr = *ptrl;
        *ptrl = p;

        ptr++;
        ptrl--;

    }
    int *l = arr+10;
    ptr = arr;
    for(; ptr < l; ptr++)
    {
        printf("%d ", *ptr);
    }
    printf("\n");

    return 0;
}
