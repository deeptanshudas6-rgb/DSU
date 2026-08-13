#include <stdio.h>
#include <string.h>
int main()
{int i, n, count = 0;
    char arr[100][20], search[20];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings:\n");
    for(i = 0; i < n; i++)
    {scanf("%s", arr[i]);}

    printf("Enter string to search: ");
    scanf("%s", search);

    for(i = 0; i < n; i++)
    {
        if(strcmp(arr[i], search) == 0)
        {
            count++; }}
    if(count > 0)
        printf("String occurs %d time(s).", count);
    else
        printf("String not found.");

    return 0;
}