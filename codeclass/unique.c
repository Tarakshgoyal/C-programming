#include<stdio.h>
int main() 
{
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int brr[n]; 
    int k = 0;  
    for (int i = 0; i < n; i++) 
    {
        int d = 0;
        for (int j = 0; j < i; j++) 
        {
            if (arr[i] == arr[j]) 
            {
                d = 1;
                break;
            }
        }
        if (!d) 
        {
            brr[k++] = arr[i];
        }
    }
    for (int i = 0; i < k; i++) 
    {
        printf("%d ", brr[i]);
    }
    return 0;
}// maximum sub array problem kadan's algo