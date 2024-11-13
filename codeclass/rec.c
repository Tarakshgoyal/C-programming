#include<stdio.h>
int ginti(int n)
{
    
    if(n==0)
    {
        return n;
    }
    printf("%d ",n);
    ginti(n-1);
    printf("%d ",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    ginti(n);
    return 0;
}//2 number int recurive call a*b?? and a^b??fib