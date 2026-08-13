#include<stdio.h>

int main()
{
    int arr[100],n,i,search,low,high,mid,flag=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&search);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==search)
        {
            flag=1;
            break;}
        else if(search<arr[mid])
        { high=mid-1;}
        else
        {low=mid+1;}}
    if(flag)
    printf("Element found at position %d",mid+1);
    else
    printf("Element not found");
    return 0;
}