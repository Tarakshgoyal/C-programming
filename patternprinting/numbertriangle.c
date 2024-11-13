#include <stdio.h>
int main()
{
    int n,a;
    printf("enter a number");
    scanf("%d", &n);
    a=n;
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= a; j = j + 1)
        {
            printf("%d ", j);
        }
        a=a-1;
        printf("\n");
    }
    return 0;
}