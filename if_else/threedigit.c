#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if (n>99 && n<1000)
    {
        printf("it is a 3 digit number");
    }
    else
    {
        printf("it is not a 3 digit number");
    }
    return 0;
}