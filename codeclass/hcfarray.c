#include<stdio.h>
int min(int a, int b)
{
    if (a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int gcd(int a, int b)
{
    int hcf;
    for (int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
            break;
        }
    }
}
int main()
{ 
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    int arr[n],h[n-1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the highest common factor array of adjacent 2 number enter by you is --> ");
    for(int i=0;i<n-1;i++)
    {
        h[i]=gcd(arr[i],arr[i+1]);
        printf("%d ",h[i]);
    }
    return 0;
}