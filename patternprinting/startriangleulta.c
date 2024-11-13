#include<stdio.h>
int main()
{
    int n;
    printf("enter thr rows");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+1)
    {
        for(int j=n;j>=i;j=j-1)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}