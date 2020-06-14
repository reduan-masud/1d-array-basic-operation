#include <stdio.h>

int main()
{

    int arr1[10], arr2[10];

    printf("Enter 10 value saperated by space for array 1.\n");
    for(int &i:arr1) scanf("%d", &i);
    
    printf("\n");
    printf("Enter 10 value saperated by space fro array 2. \n");
    for(int &i:arr2) scanf("%d", &i);


    int *ptr1 = arr1;
    int *ptr2 = arr2;
    int *len = ptr1+10;

    int same = 1;
    while(ptr1 < len)
    {
        if(*ptr1 != *ptr2)
        {
            same = 0;
            break;
        }
        ptr1++;
        ptr2++;
    }

    if(same) printf("Same\n");
    else printf("Not same \n");



    return 0;

}
