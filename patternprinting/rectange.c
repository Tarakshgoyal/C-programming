#include <stdio.h>
int main()
{
    int n,m;
    printf("enter a number : ");
    scanf("%d", &n);
    printf("enter a number : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int i = 1; i <= m; i = i + 1)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}