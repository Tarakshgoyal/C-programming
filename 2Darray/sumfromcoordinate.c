#include <stdio.h>
int main()
{
    int r, c;
    printf("enter number of rows");
    scanf("%d", &r);
    printf("enter number of columns");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            printf("enter value ");
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int n, m, o, p;
    printf("enter starting coordinate");
    scanf("%d", &n);
    scanf("%d", &m);
    printf("enter ending coordinate");
    scanf("%d", &o);
    scanf("%d", &p);
    int sum = 0;
    for (int i = n; i <= o; i = i + 1)
    {
        for (int j = m; j <= p; j = j + 1)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("sum is %d", sum);
    return 0;
}