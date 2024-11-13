#include<stdio.h>
int main()
{
    int n, m,count=0;
    printf("enetr a number ");
    scanf("%d", &n);
    int x;
    printf("enter a number ");
    scanf("%d",&x);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enetr value");
        scanf("%d", &m);
        arr[i] = m;
    }
    for (int j=0;j<=n-1;j=j+1)
    {
        for(int k=j+1;k<=n-1;k=k+1)
        {
            if(arr[k]+arr[j]==x)
            {
                count=count+1;
                printf("(%d , %d) \n",arr[j],arr[k]);
            }
        }
    }
    printf("%d",count);
    return 0;
}