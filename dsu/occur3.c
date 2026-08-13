#include <stdio.h>
int main()
{
    int arr[10], n, i, search, flag = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter array elements:");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    printf("Element found at position(s): ");
    for(i = 0; i < n; i++)
    {
        if(arr[i] == search)
        {printf("%d ", i + 1);
        flag = 1;
        }}

    if(flag == 0)
    printf("Not Found");
    return 0;
}