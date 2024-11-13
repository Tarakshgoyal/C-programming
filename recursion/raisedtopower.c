#include<stdio.h>
int power(int n,int m)
{
    if (m==0)
    {
        return 1;
    }
    return n*power(n,m-1);
}
int main()
{
    int a;
    printf("enter base valuee");
    scanf("%d",&a);
    int b;
    printf("enter power");
    scanf("%d",&b);
    int p=power(a,b);
    printf("%d",p);
    return 0;
}