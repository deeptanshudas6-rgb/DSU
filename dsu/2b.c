#include<stdio.h>

int main(){
    int arr[100],n,i,j,max=0,and;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);}

    for(i=0;i<n-1;i++)
    {for(j=i+1;j<n;j++){
        and=arr[i]&arr[j];
        if(and>max)
        max=and;}}

    printf("Maximum AND value = %d",max);

    return 0;
}
