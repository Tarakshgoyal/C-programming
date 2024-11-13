#include<stdio.h>
int check(int arr[],int n)
{
    for(int i=0;i<=n-1;i=i+1)
    {
        if (arr[i]!=arr[n-1-i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m;
    printf("enetr a number ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n-1;i=i+1)
    {
        printf("enter value");
        scanf("%d",&m);
        arr[i]=m;
    }
    if(check(arr,n))
    {
        printf("array is pallendrom");
    }
    else
    {
        printf("not a pallendrom");
    }
    return 0;
}