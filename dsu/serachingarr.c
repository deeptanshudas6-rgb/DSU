#include <stdio.h>
int main(){

int arr[100],n,searchval,i,found = 0;

printf("enter number of elements in array: ");
scanf("%d",&n);
printf("enter array elements: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

printf("enter value to be searched: ");
scanf("%d",&searchval);

for(i=0;i<n;i++){
  if(arr[i]==searchval){
    printf("value found: %d",i+1);
    found=1;
    break;
  }}
    if(found==0){printf("not found");}


return 0;}
