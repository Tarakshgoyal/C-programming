#include<stdio.h>
int main()
{
    int n,a=0,x=1;
    for (int i=1;i<=500;i=i+1)
    {
        x=i;
        while(x)
        {
            n=x%10;
            a=a+(n*n*n);
            x=x/10;
        }
        if(a==i)
        {
            printf("%d is armstrong");
        }
    }
    return 0;
}