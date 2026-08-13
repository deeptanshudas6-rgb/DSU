#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *arr, n, i, search, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {if(arr[i] == search)
        {flag = 1;
            break;}}

    if(flag){printf("Element found at position %d", i + 1);}
    else {printf("Element not found");}
    free(arr);
    return 0;
}