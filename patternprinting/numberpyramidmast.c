#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int l = 1; l <= n - i; l = l + 1)
        {
            printf("  ");
        }
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("%d ", j);
        }
        for (int k = i - 1; k >= 1; k = k - 1)
        {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}