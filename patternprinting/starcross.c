#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= n; j = j + 1)
        {
            if (n % 2 != 0)
            {
                if (i == j || i + j == n + 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if (i == j || i + j == n)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}