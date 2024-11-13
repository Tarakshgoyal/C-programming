#include<stdio.h>
int main()
{
    int m,a=0,x=1;
    scanf("%d",&m);
    int n;
    x=m;
    while(x)
    {
        n=x%10;
        a=a+(n*n*n);
        x=x/10;
    }
    if(a==m)
    {
        printf("%d is armstrong",m);
    }
    else 
    {
        printf("%d is not armstrong",m);
    }
    return 0;
}