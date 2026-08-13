#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter bit position: ");
    scanf("%d",&n);

    num=num^(1<<n);
    printf("Number after toggling = %d",num);
    return 0;
}
