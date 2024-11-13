#include<stdio.h>
void back(int n)
{
    if (n==0)
    {
        return ;
    }
    back(n-1);
    printf("%d\n",n);
    return;
}
int main()
{
    int n;
    printf("enetr a number");
    scanf("%d",&n);
    back(n);
    return 0;
}