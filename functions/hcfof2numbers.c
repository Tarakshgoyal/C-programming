#include<stdio.h>
int min(int a, int b)
{
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int gcd(int a, int b)
{
    int hcf;
    for (int i=min(a,b);i>=1;i=i-1)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
            break;
        }
    }prime
}
int main()
{ 
    int n,m;
    printf("enter a number ");
    scanf("%d",&n);
    printf("enter a number ");
    scanf("%d",&m);
    int hcf=gcd(n,m);
    printf("the hcf/gcd of %d and %d is %d:",n,m,hcf);
}