#include <stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 65; j <= i + 64; j = j + 1)
        {
            char ch = (char)j;
            printf("%c ", ch);
        }
        printf("\n");
    }
    return 0;
}