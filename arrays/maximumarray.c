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
        printf("enter value");
        scanf("%d", &m);
        arr[i] = m;
    }
    // int max=arr[0];
    int max = INT_MIN;
    for (int j = 0; j <= n - 1; j = j + 1)
    {
        if (max < arr[j])
        {
            max = arr[j];
        }
    }
    printf("%d", max);
    return 0;
}