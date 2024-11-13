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
    int minr=0;
    int maxr=r-1;
    int minc=0;
    int maxc=c-1;
    int tne=r*c;
    int count=0;
    while(count<tne)
    {
        for(int j=minc;j<=maxc;j=j+1)
        {
            printf("%d ",arr[minr][j]);
            count++;
        }
        minr++;
        if(count>=tne)
        {
            break;
        }
        for(int i=minr;i<=maxr;i=i+1)
        {
            printf("%d ",arr[i][maxc]);
            count++;
        }
        maxc--;
        if(count>=tne)
        {
            break;
        }
        for(int j=maxc;j>=minc;j--)
        {
            printf("%d ",arr[maxr][j]);
            count++;
        }
        maxr--;
        if(count>=tne)
        {
            break;
        }
        for(int i=maxr;i>=minr;i--)
        {
            printf("%d ",arr[i][minc]);
            count++;
        }
        minc++;
        if(count>=tne)
        {
            break;
        }
    }
    return 0;
}