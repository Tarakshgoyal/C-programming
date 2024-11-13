#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        brr[i]=arr[i];
        printf("%d ",brr[i]);
    }
    // int m=0;
    // for(int i=0;i<n;i++)
    // {
    //     m=m+arr[i];
    // }
    // int x=1;
    // for(int i=0;i<n;i++)
    // {
    //     x=x*arr[i];
    // }
    // printf("\nsum is --> %d",m);
    // printf("\nproduct is --> %d",x);
    return 0;
}