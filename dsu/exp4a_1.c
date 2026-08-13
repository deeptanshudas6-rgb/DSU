#include<stdio.h>

int search(int arr[],int low,int high,int key)
{
    int mid;
    if(low>high)
        return -1;
    mid=(low+high)/2;
    if(arr[mid]==key)
        return mid;
    if(key<arr[mid])
        return search(arr,low,mid-1,key);
    return search(arr,mid+1,high,key);
}

int main()
{
    int arr[100],n,i,key,pos;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter sorted array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    pos=search(arr,0,n-1,key);

    if(pos==-1)
        printf("Element not found");
    else
        printf("Element found at position %d",pos+1);

    return 0;
}