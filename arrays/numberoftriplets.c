#include <stdio.h>
int main()
{
    int n, x, m, count = 0;
    printf("enter a number");
    scanf("%d", &n);
    printf("enter a nnumber ");
    scanf("%d", &x); 
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enter a value");
        scanf("%d", &m);
        arr[i] = m;
    }
    for (int j = 0; j <= n - 1; j = j + 1)
    {
        for (int k = j + 1; k <= n - 1; k = k + 1)
        {
            for (int l = k + 1; l <= n - 1; l = l + 1)
            {
                if (arr[j] + arr[k] + arr[l] == x)
                {
                    count = count + 1;
                    printf("(%d , %d , %d)", arr[j], arr[k], arr[l]);
                }
            }
        }
    }
    printf("%d", count);
    return 0;
}