#include <stdio.h>
int main()
{
    int n, m;
    printf("enter a nnumber");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("Enter value");
        scanf("%d", &m);
        arr[i] = m;
    }
    for (int j = 0; j <= n - 1; j = j + 1)
    {
        if (j % 2 == 0)
        {
            arr[j] = arr[j] + 10;
        }
        else
        {
            arr[j] = arr[j] * 2;
        }
        printf("%d  ", arr[j]);
    }
    return 0;
}