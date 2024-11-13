#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main()
{
    int n;
    printf("enter  a number ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for (int j = 0; j <= i; j ++)
        {
            int icj = combination(i, j);
            printf(" %d  ", icj);
        }
        printf("\n");
    }
    return 0;
}