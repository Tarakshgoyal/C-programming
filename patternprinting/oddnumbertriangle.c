#include <stdio.h>
int main()
{
    int n,a;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= i * 2; j = j + 2)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}