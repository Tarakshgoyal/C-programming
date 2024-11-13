#include<stdio.h>
int main()
{
    int n,prod=1;
    printf("enter a number ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n-1;i=i+1)
    {
        int m;
        printf("enter values");
        scanf("%d",&m);
        arr[i]=m;
        prod=prod*arr[i];
    }
    printf("%d",prod);
    return 0;
}