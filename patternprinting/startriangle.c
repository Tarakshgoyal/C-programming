#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows ");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+1)
    {
        for(int j=1;j<=i;j=j+1)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}