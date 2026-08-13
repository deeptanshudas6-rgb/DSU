#include <stdio.h>
#include <string.h>

int main() {

    char arr[100], searchval;
    int n, i, found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter array strings:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    printf("Enter string to be searched: ");
    scanf("%s", searchval);

    for(i = 0; i < n; i++) {
        if(strcmp(arr[i], searchval) == 0) {
            printf("String found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("String not found");
    }

    return 0;
}