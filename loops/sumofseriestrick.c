#include<stdio.h>
int main()
{
    int n,sum;
    printf("enter number ");
    scanf("%d",&n);
    if (n%2==0)
    {
        sum= -n/2;
        printf("%d",sum);
    }
    else
    {
        sum= -n/2 + n;
        printf("%d",sum);
    }
    return 0;
}