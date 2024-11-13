#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("enter a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        int m;
        printf("enetr value");
        scanf("%d", &m);
        arr[i] = m;
        sum = sum + arr[i];
    }
    printf("%d ", sum);
    return 0;
}