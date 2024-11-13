#include <stdio.h>
int main()
{
    int r, c, sum = 0;
    printf("enter number of rows ");
    scanf("%d", &r);
    printf("enter number of columns ");
    scanf("%d", &c);
    int arr[r][c], arrr[r][c];
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            printf("enter values for 1st matric");
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            printf("enter values for 2nd matric");
            scanf("%d", &arrr[i][j]);
        }
    }
    for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            
            printf("%d ", arr[i][j] + arrr[i][j]);
        }
        printf("\n");
    }
     for (int i = 0; i < r; i = i + 1)
    {
        for (int j = 0; j < c; j = j + 1)
        {
            sum = sum + arr[i][j] + arrr[i][j];
        }
    }
    printf("%d",sum);
    return 0;
}