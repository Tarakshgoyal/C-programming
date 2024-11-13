#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,m;
    printf("enter a number ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i=i+1)
    {
        printf("enter a value");
        scanf("%d",&m);
        arr[i]=m;
    }
    int x;
    printf("enter a number to search");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<=n-1;i=i+1)
    {
        if(arr[i]==x)
        {
            flag=true;
            break;
        }
    }
    if(flag==false);
    {
         printf("%d",arr[m]);
    }
    return 0;
}