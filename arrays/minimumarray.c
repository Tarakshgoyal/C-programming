#include <stdio.h>
#include <limits.h>
int main()
{
    int n, m;
    printf("enter a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enetr value");
        scanf("%d", &m);
        arr[i] = m;
    }
    // int min=arr[0];
    int min = INT_MAX;
    for (int j = 0; j <= n - 1; j = j + 1)
    {
        if (min > arr[j])
        {
            min = arr[j];
        }
    }
    printf("%d", min);
    return 0;
}