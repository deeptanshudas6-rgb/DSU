#include<stdio.h>
#include<string.h>

int main()
{
    char arr[100][20],search[20];
    int n,i,low,high,mid,flag=0;

    printf("Enter number of strings: ");
    scanf("%d",&n);

    printf("Enter sorted strings:\n");
    for(i=0;i<n;i++)
        scanf("%s",arr[i]);
    printf("Enter string to search: ");
    scanf("%s",search);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(strcmp(arr[mid],search)==0)
        {flag=1;
        break;}
        else if(strcmp(search,arr[mid])<0)
        { high=mid-1;}
        else
        {low=mid+1;}}
    if(flag)
    printf("String found at position %d",mid+1);
    else
    printf("String not found");

    return 0;
}