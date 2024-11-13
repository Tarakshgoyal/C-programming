#include <stdio.h>
int main()
{
    int r, c, max = 0, maxr = 0;
    printf("enter number of rows ");
    scanf("%d", &r);
    printf("enter number of columns ");
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
    for (int i = 0; i < r; i = i + 1)
    {
        int sum = 0;
        for (int j = 0; j < c; j = j + 1)
        {
            sum = sum + arr[i][j];
        }
        if (max < sum)
        {
            max = sum;
            maxr = i;
        }
    }
    printf("row number is %d and sum is %d ",maxr , max);
    return 0;
}