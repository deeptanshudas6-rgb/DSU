#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter number: ");
    scanf("%d",&num);
    printf("Enter bit position: ");
    scanf("%d",&n);
    if(num&(1<<n)){
    printf("Bit at position %d is Set",n);}
    else{printf("Bit at position %d is Clear",n);}
    return 0;
}