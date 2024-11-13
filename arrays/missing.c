#include <stdio.h>
int main()
{
    int n, m;
    printf("enter a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enter a value");
        scanf("%d", &m);
        arr[i] = m;
    }
    for (int j = 1, i = 0; j <= n + 1, i <= n - 1; j = j + 1, i = i + 1)
    {
        if (arr[i] != j)
        {
            printf("%d is missing",j);
            j=j+1;
        }
    }
    return 0;
}