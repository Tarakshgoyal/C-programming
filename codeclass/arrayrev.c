#include<stdio.h>
#include<limits.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++)
    {
        swap(&arr[i],&arr[n-i-1]);
    }
    int max=arr[0];
    printf("the reversed array is \n");
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        printf("%d ",arr[i]);
    }
    printf("\nthe second largest number is --> ");
    int semimax=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max!=arr[i])
        {
            if(semimax<arr[i])
            {
                semimax=arr[i];
            }
        }
    }
    printf("%d ",semimax);
    return 0;
}