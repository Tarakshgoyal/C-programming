#include <stdio.h>
int main()
{
    int n;
    printf("enter the vale of n");
    scanf("%d", &n);
    for (int x = 4; x <= 3 * n + 1; x = x + 3)
    {
        printf("%d \n", x);
    }
    return 0;
}