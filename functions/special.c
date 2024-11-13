#include <stdio.h>
int minimum(int a, int b)
{
    int c = a;
    if (b < a)
    {
        c = b;
    }
    else
    {
        c = a;
    }
    return c;
}
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    int min = 0;
    for (int i = 1; i <= 2 * n - 1; i = i + 1)
    {
        for (int j = 1; j <= 2 * n - 1; j = j + 1)
        {
            int a = i;
            if (i > n)
            {
                a = 2 * n - i;
            }
            int b = j;
            if (b > n)
            {
                b = 2 * n - j;
            }
            min = minimum(a, b);
            printf("%d ", n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}