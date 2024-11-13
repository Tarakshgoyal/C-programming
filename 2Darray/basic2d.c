#include <stdio.h>
int main()
{
    int r, c;
    printf("enter number of rows ");
    scanf("%d", &r);
    printf("enter number of columns ");
    scanf("%d", &c);
    int arr[r][c];
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
    // arr[0][0]=1;
    // arr[0][1]=2;
    // arr[1][0]=3;
    // arr[1][1]=4;
    return 0;
}