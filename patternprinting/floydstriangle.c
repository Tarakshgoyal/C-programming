#include <stdio.h>
int main()
{
    int n, a = 1;
    printf("enter a number");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            printf("%d ", a);
            a = a + 1;
        }
        printf("\n");
    }
    return 0;
}