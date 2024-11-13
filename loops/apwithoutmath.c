#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int a=4;
    for (int x=1;x<=n;x=x+1)
    {
        printf("%d \n",a);
        a=a+3;
    }
    return 0;
}