#include<stdio.h>
int odd(int n)
{
    return 3;
}
int eve(int n)
{
    if(n%2==0)
    {
        return 2;
    }
    else
    {
        odd(n);
    }
    return 0;
}

int main()
{
    int n;
    scanf("%d",&n);
    int x;
    x=eve(n);
    if(x==2)
    {
        printf("%d is even",n);
    }
    else
    {
        printf("%d is odd",n);
    }
    return 0;
}