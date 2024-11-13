#include<stdio.h>
int main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    for (int i=1;i<=n;i=i+1)
    {
        for (int j=1;j<=i;j=j+1)
        {
            if(i==j || (i+j)%2==0)
            {
                printf("1 ");
            }
            else 
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}