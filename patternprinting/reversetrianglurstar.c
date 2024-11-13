#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+1)
    {
        for(int j=1;j<=i;j=j+1)
            printf("  ");
        for (int k=n;k>=i;k=k-1)
            printf("* ");
        printf("\n");
    }
    return 0;
}