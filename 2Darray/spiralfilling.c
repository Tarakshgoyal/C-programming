#include<stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows ");
    scanf("%d",&r);
    c=r;
    int arr[r][c];
    int count=1;
    int maxr=r-1;
    int maxc=c-1;
    int minr=0;
    int minc=0;
    int tne=r*c;
    while (count<=tne)
    {
        for(int j=minc;j<=maxc;j=j+1)
        {
            arr[minr][j]=count;
            count++;
        }
        minr++;
        for(int i=minr;i<=maxr;i=i+1)
        {
            arr[i][maxc]=count;
            count++;
        }
        maxc--;
        for(int j=maxc;j>=minc;j=j-1)
        {
            arr[maxr][j]=count;
            count++;
        }
        maxr--;
        for(int i=maxr;i>=minr;i=i-1)
        {
            arr[i][minc]=count;
            count++;
        }
        minc++;
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