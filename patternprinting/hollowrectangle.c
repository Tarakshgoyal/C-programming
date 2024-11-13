#include <stdio.h>
int main()
{
    int n, m;
    printf("enter a number ");
    scanf("%d", &n);
    printf("enter a number");
    scanf("%d", &m);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= m; j = j + 1)
        {
            if (i == 1 || i == n  || j == 1 || j == m )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}