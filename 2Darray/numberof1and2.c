#include <stdio.h>
int main()
{
    int r, c, max = 0, maxr = 0;
    printf("enter the number of rows ");
    scanf("%d", &r);
    printf("enter the number of columns ");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            printf("enter values");
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
            if (arr[i][j] == 1)
            {
                sum = sum + 1;
            }
            if (max < sum)
            {
                max = sum;
                maxr = i;
            }
        }
    }
    printf("number of 1's are %d of row number %d", max, maxr);
    return 0;
}