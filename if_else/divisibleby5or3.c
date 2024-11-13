#include<stdio.h>
int main()
{
    printf("enter a number");
    int x;
    scanf("%d",&x);
    if (x%5==0 || x%3==0)
    {
        printf("the number is divisible by 5 or 3");
    }
    else
    {
        printf("the number is not divisible by 5 or 3");
    }
    return 0;
}