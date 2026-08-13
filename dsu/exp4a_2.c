#include<stdio.h>

int main()
{
    int arr[100],n,i,key,low,high,mid;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter descending array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    low=0;
    high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;

        if(arr[mid]==key)
        {printf("Element found at position %d",mid+1);
        return 0;}

        if{(key>arr[mid])
            high=mid-1;}

        else{low=mid+1;}}
    printf("Element not found");
    return 0;
}