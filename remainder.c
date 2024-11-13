#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter divident");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d",&b);
    c=a/b;
    d=a-(c*b);// or use a % b
    printf("the remainder is %d",d);
    return 0;
}