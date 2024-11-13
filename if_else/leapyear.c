#include<stdio.h>
int main()
{
    printf("enter an year");
    int x;
    scanf("%d",&x);
    if (x%4==0)
    {
        printf("%d is leap year",x);
    }
    else
    {
        printf("%d is not a leap year",x);
    }
    return 0;
}