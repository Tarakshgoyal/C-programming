#include<stdio.h>
int main()
{
    printf("enter a number : ");
    int x;
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("even number");
    }
    else
    {
        printf("odd number");
    }
    return 0;
} 