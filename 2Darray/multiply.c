#include <stdio.h>
int main()
{
    int r, c;
    printf("enter number of rows ");
    scanf("%d", &r);
    printf("enter number of columns ");
    scanf("%d", &c);
    int arr[r][c], brr[r][c];
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            printf("enter values ");
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
    printf("\n");
    int r1, c1;
    printf("enter number of rows ");
    scanf("%d", &r1);
    printf("enter number of columns ");
    scanf("%d", &c1);
    for (int i = 0; i < r1; i = i + 1)
    {
        for (int j = 0; j < c1; j = j + 1)
        {
            printf("enter values ");
            scanf("%d", &brr[i][j]);
        }
    }
    for (int i = 0; i < r1; i = i + 1)
    {
        for (int j = 0; j < c1; j = j + 1)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if (c == r1)
    {
        int res[r][c1];
        for (int i = 0; i < r; i = i + 1)
        {
            for (int j = 0; j < c1; j = j + 1)
            {
                res[i][j] = 0;
                for (int k = 0; k < c; k = k + 1)
                {
                    res[i][j] = res[i][j] + arr[i][k] * brr[k][j];
                }
            }
        }
        for (int i = 0; i < r; i = i + 1)
        {
            for (int j = 0; j < c1; j = j + 1)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("not valid matrix to multiply");
    }
    return 0;
}