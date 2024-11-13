#include <stdio.h>
void fun(int arr[])
{
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
    return;
}
int main()
{
    int n, m;
    printf("enetr a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enetr value");
        scanf("%d", &m);
        arr[i] = m;
    }
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}