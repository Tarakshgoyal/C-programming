#include <stdio.h>
int main()
{
    // int arr[5] = {2,4,6,8,1};
    // arr[4]=100;
    // printf("%d",arr[4]);
    // float a[3]={1.2,3.4,5.7};
    // printf("%f",a[0]);
    int n;
    printf("enetr a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        int m;
        printf("enter value");
        scanf("%d", &m);
        arr[i+1] = m;
    }
    int o;
    printf("enetr the array number");
    scanf("%d", &o);
    printf("%d", arr[o]);
    return 0;
}