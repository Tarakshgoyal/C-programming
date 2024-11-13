#include<stdio.h>
int main()
{
    int n,m;
    printf("enter a number ");
    scanf("%d",&n);
    int arr[n],arru[n];
    for (int i=0;i<=n-1;i=i+1)
    {
        printf("enter value");
        scanf("%d",&m);
        arr[i]=m;
        arru[n-1-i]=arr[i];
    }
    printf("actual order \n");
    for(int r=0;r<=n-1;r=r+1)
    {
        printf("%d \n",arr[r]);
    }
    printf("reverse order \n"); 
    for(int j=0;j<=n-1;j=j+1)
    {
        printf("%d \n",arru[j]);
    }
    return 0;
}