#include <stdio.h>
int main()
{
    int n, sum = 1, a = 1, b = 1;
    printf("enter a number");
    scanf("%d", &n);
    n = n - 2;
    for (int i = 1; i <= n; i = i + 1)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("%d", sum);
    return 0;
}