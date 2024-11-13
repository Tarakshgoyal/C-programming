#include <stdio.h>
int main()
{
    int n;
    printf("enter an odd number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= n; j = j + 1)
        {
            if (j == (n / 2) + 1 || i == (n / 2) + 1)
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