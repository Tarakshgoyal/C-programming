#include <stdio.h>
int factorial(int n)
{
    // int fact = 1;
    // for (int i = 1; i <= n; i = i + 1)
    // {
    //     fact = fact * i;
    // }
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("enetr a number ");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("%d ", fact);
    return 0;
}