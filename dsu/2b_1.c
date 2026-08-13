#include<stdio.h>
int main()
{int arr[100],n,i,j,max=0,or;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {or=arr[i]|arr[j];
        if(or>max)
        max=or;}}

    printf("Maximum OR value = %d",max);
    return 0;
}
