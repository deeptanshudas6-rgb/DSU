#include <stdio.h>
int main() {
    int arr[10], n, searchval, i, found = 0, count = 0;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &searchval);

    for(i = 0; i < n; i++) {
        count++;
        if(arr[i] ==searchval) {
            printf("Found at position%d",i + 1);
        found=1;
        break;}}
    if(found == 0)
    printf("Not Found");
    printf("Comp= %d",count);



    return 0;
}