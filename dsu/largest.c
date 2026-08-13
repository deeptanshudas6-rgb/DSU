#include <stdio.h>
int main()
{
    int arr[100], n, i, largest;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    largest = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];    }
    printf("Largest element = %d", largest);
    return 0;
}