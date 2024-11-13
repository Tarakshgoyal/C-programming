#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int m = 1; m <= n; m = m + 1)
    {
        printf("%d ", m);
    }
    for (int m = n - 1; m >= 1; m = m - 1)
    {
        printf("%d ", m);
    }
    printf("\n");
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= n - i; j = j + 1)
        {
            printf("%d ", j);
        }
        for (int k = 1; k <= 2 * i - 1; k = k + 1)
        {
            printf("  ");
        }
        for (int l = n-i; l >= 1; l = l - 1)
        {
            printf("%d ", l);
        }
        printf("\n");
    }
    return 0;
}