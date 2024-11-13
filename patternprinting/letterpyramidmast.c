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
        for (int k = 65; k <= 64 + i; k = k + 1)
        {
            char ch = (char)k;
            printf("%c ", ch);
        }
        for (int l = 63+i; l >= 65; l = l - 1)
        {
            char cha = (char)l;
            printf("%c ", cha);
        }
        printf("\n");
    }
    return 0;
}