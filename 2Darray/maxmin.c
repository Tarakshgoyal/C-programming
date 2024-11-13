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
    int max=arr[0][0],x,y;
    for (int i=0;i<r;i=i+1)
    {
        for (int j=0;j<c;j=j+1)
        {
            if (max<arr[i][j])
            {
                max=arr[i][j];
                x=i;
                y=j;
            }
        }
    }
    printf("%d is of index( %d , %d )",max,x,y);
    return 0;
}