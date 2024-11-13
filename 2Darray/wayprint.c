#include<stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows ");
    scanf("%d",&r);
    printf("enter number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i=i+1)
    {
        for(int j=0;j<c;j=j+1)
        {
            printf("enter the values");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i=i+1)
    {
        if (i%2==0)
        {
            for(int j=0;j<c;j=j+1)
            {
                printf("%d ",arr[i][j]);
            }
        }
        else
        {
            for(int j=c-1;j>=0;j=j-1)
            {
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}