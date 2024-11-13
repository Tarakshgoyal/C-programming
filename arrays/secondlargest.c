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
    int max = arr[0];
    int smax = arr[0];
    // for (int j = 0; j <= n - 1; j = j + 1)
    // {
    //     if (max < arr[j])
    //     {
    //         max = arr[j];
    //     }
    // }
    // for (int i = 0; i <= n - 1; i = i + 1)
    // {
    //     if (arr[i] != max && smax < arr[i])
    //     {
    //         smax = arr[i];
    //     }
    // }
    for (int i = 1; i <= n - 1; i = i + 1)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    printf("%d", smax);
    return 0;
}