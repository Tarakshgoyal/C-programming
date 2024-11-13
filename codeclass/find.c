#include<stdio.h>
int main()
{
    int n,m,k,a,b;
    scanf("%d%d",&n,&m);
    int arr[n][m];
    
    printf("enter a number 2 find ");
    scanf("%d",&k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           printf("%d ",arr[i][j]);
           if(k==arr[i][j])
           {
                a=i;
                b=j;
           }
        }
        printf("\n");
    }
    printf("the location of %d is (%d,%d)",k,a,b);
    return 0;
}
