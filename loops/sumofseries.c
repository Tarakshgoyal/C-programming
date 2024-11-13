#include <stdio.h>
int main()
{
    int n, x = 0;
    printf("enter a number : ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i = i + 1)
    {
        if (i % 2 != 0)
        {
            x = x + i;
        }
        else
        {
            sum = sum + i;
        }
    }
    printf("the sum is : %d", x - sum);
    return 0;
}