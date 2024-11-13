#include<stdio.h>
int mul(int n,int m,int o)
{
    return n*m*o;
}
int main()
{
    int n,m,o;
    scanf("%d%d%d",&n,&m,&o);
    printf("%d",mul(n,m,o));
    return 0;
}//