#include <stdio.h>

int main()
{
    freopen("input.txt", "r", stdin);
    int arr[100] ={10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    //int n = 10;
    int n;
    scanf("%d", &n);
    int i;
    for(i = 0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }



    return 0;
}

