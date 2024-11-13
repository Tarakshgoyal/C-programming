#include<stdio.h>
int main()
{
    printf("enter a number");
    int x;
    scanf("%d",&x);
    if (x%5==0)
    {
        printf("%d is divisible by 5",x);
    }
    else
    {
        printf("%d is not divisible by 5",x);
    }
    return 0;
}