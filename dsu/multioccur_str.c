#include <stdio.h>
#include <string.h>
int main()
{int i, n, flag = 0;
    char arr[100][20], search[20];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
    {scanf("%s", arr[i]);}

    printf("Enter string to search: ");
    scanf("%s", search);

    printf("String found at position(s): ");

    for(i = 0; i < n; i++)
    {
        if(strcmp(arr[i], search) == 0)
        {printf("%d ", i + 1);
            flag = 1;}}

    if(flag == 0)
        printf("Not Found");
    return 0;
}