#include<stdio.h>
void forward(int x,int n)
{
    if (x>n)
    {
        return;
    }
    printf("%d\n",x);
    forward(x+1,n);
    return;
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    forward(1,n);
    return 0;
}