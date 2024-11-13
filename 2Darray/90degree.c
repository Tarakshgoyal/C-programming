#include<stdio.h>
int main()
{
    int r,c;
    printf("enter the number of rows ");
    scanf("%d",&r);
    printf("enter the number of columns ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i=i+1)
    {
        for(int j=0;j<c;j=j+1)
        {
            printf("enter value ");
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i=i+1)
    {
        for(int j=0;j<c;j=j+1)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<r;i=i+1)
    {
        for(int j=0;j<i;j=j+1)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<r;i=i+1)
    {
        int j=0;
        int k=r-1;
        while (j<k)
        {
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j=j+1;
            k=k-1;
        }
    }
    for(int i=0;i<r;i=i+1)
    {
        for(int j=0;j<c;j=j+1)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}