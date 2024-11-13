#include<stdio.h>
int main()
{
    int r,c;
    printf("enter number of students ");
    scanf("%d",&r);
    c=4;
    int arr[r][c];
    for(int i=0;i<r;i=i+1)
    {
        printf("enter roll number ");
        scanf("%d",&arr[i][0]);
        printf("enter physic marks ");
        scanf("%d",&arr[i][1]);
        printf("enter math marks ");
        scanf("%d",&arr[i][2]);
        printf("enter chemistry marks ");
        scanf("%d",&arr[i][3]);
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