#include <stdio.h>
int main()
{
    int n, m, x;
    printf("enter a number ");
    scanf("%d", &n);
    printf("enter a number ");
    scanf("%d", &x);
    int arr[n];
    int count = 0;
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enter value");
        scanf("%d", &m);
        arr[i] = m;
        if (arr[i] > x)
        {
            count = count + 1;
        }
    }
    printf("%d ", count);
    return 0;
}