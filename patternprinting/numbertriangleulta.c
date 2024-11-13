#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+1)
    {
        for (int j=i;j>=0;j=j-1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}