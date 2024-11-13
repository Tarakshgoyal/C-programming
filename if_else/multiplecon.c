#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0 && n%3==0)
    {
        printf("the number is divisible by both 5 and 3");
    }
    else
    {
        printf("number is not divisible by both 5 and 3");
    }
    return 0;
}