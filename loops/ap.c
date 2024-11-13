#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int x=1;x<=2*n-1;x=x+2)
    {
        printf("%d \n",x);
    }
    return 0;
}