#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= n - i; j = j + 1)
        {
            printf("  ");
        }
        for (int k = 65; k <= 64 + (i * 2 - 1); k = k + 1)
        {
            char ch = (char)k;
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}