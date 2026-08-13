#include<stdio.h>
#include<string.h>
int main()
{

    int i,n,flag=0;
    char arr[100][20],search[20];

    printf("enter number of elements: ");
    scanf("%d",&n);

    printf("enter string of array: ");
    for(i=0;i<n;i++){
        scanf("%s",arr[i]);
    }

 printf("enter search string: ");
    scanf("%s",search);

     for(i=0;i<n;i++){
       if(strcmp(arr[i],search)==0){
          flag=1;
          break; }

    }
    if(flag==1){
        printf("found at position:%d ",i+1);
    }else{printf("not found");
    }

        return 0;
}
