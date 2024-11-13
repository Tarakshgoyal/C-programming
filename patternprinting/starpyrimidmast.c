#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    for (int m = 1; m <= n * 2 - 1 ; m = m + 1)
    {
        printf("* ");
    }
    printf("\n");
    for (int i = 1; i <= n-1; i = i + 1)
    {
        for (int j = n-1; j >= i; j = j - 1)
        {
            printf("* ");
        }
        for (int k = 1; k <= 2 * i - 1; k = k + 1)
        {
            printf("  ");
        }
        for (int l = n-1; l >= i; l = l - 1)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}