#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],sum,a,b;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m=INT_MAX;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            sum=arr[i]+arr[j];
            if(sum<m  && sum>0)
            {
                m=sum;
                a=i;
                b=j;
            }
            else 
            {
                int max=arr[0];
                int max2=arr[0];
                int semimax=INT_MIN;
                for(int i=0;i<n;i++)
                {
                    if(max2<arr[i])
                    {
                        max2=arr[i];
                        a=i;
                    }
                    if(max!=arr[i])
                    {
                        if(semimax<arr[i])
                        {
                            semimax=arr[i];
                            b=i;
                        }
                    }
                }
            }
        }
    }
    printf("sum is nearest to 0 at index (%d,%d)",a,b);
    return 0;
}