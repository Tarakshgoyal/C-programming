#include<stdio.h>
int main()
{
    float arr[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%f",&arr[i][j]);
        }
    }
    float d=arr[0][0]*(arr[1][1]*arr[2][2]-arr[2][1]*arr[1][2])-arr[0][1]*(arr[1][0]*arr[2][2]-arr[2][0]*arr[1][2])+arr[0][2]*(arr[1][0]*arr[2][1]-arr[2][0]*arr[1][1]);
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%f ",arr[j][i]/d);
        }
        printf("\n");
    }
    return 0;
}