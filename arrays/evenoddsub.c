#include <stdio.h>
int main()
{
    int n, m, x = 0, y = 0;
    printf("enter a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enter value");
        scanf("%d", &m);
        arr[i] = m;
        if (i % 2 == 0)
        {
            x = x + arr[i];
        }
        else
        {
            y = y + arr[i];
        }
    }
    printf("%d ", x - y);
}