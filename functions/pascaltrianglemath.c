#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 0; i <= n; i = i + 1)
    {
        for (int j = 1; j <= n - i + 1; j = j + 1)
        {
            printf("  ");
        }
        int first = 1;
        for (int j = 0; j <= i; j = j + 1)
        {
            printf(" %d  ", first);
            first = first * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}