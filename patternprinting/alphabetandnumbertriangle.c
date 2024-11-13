#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 == 0)
        {
            for (int j = 65; j <= i + 64; j = j + 1)
            {
                char ch = (char)j;
                printf(" %c ", ch);
            }
        }
        else
        {
            for (int k = 1; k <= i; k = k + 1)
            {
                printf(" %d ", k);
            }
        }
        printf("\n");
    }
    return 0;
}