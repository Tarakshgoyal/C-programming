#include<stdio.h>
void back(int n)
{
    if (n==0)
    {
        return ;
    }
    printf("%d\n",n);
    return back(n-1);
}
int main()
{
    int n;
    printf("enetr a number");
    scanf("%d",&n);
    back(n);
    return 0;
}