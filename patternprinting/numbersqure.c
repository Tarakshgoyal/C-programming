#include <stdio.h>
int main()
{
    int n;
    printf("enter no. of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int i = 1; i <= 4; i = i + 1)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}