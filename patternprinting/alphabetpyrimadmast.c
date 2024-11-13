#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    for (int m = 65; m <= 64 + (2 * n) - 1; m = m + 1)
    {
        char ch = (char)m;
        printf("%c ", ch);
    }
    printf("\n");
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 65; j <= 64 +n - i; j = j + 1)
        {
            char cha = (char)j;
            printf("%c ", cha);
        }
        for (int k = 1; k <= 2 * i - 1; k = k + 1)
        {
            printf("  ");
        }
        for (int l = 65; l <= 64 + n - i; l = l + 1)
        {
            char cha = (char)(l + n + i - 1);
            printf("%c ", cha);
        }
        printf("\n");
    }
    return 0;
}