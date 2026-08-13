#include <stdio.h>
int main()
{
    int arr[10], n, i, search, count = 0, flag = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        count++;
        if(arr[i] == search)
        {flag = 1;
            break;}}
    if(flag)
    printf("Element found at position %d\n", i + 1);
    else
    printf("Element not found\n");
    printf("Number of comparisons = %d", count);
    return 0;
}