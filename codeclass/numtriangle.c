#include<stdio.h>
int main()
{
    int count=1;
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        int ca=count+i-1;
        for(int j=0;j<i;j++)
        {
            if(i%2!=0)
            {
                printf("%d ",count);
                count++;
            }
            else
            {
                printf("%d ",ca);
                ca--;
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}