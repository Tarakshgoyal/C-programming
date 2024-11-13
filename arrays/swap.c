
 #include <stdio.h>
void reverse(int arr[], int n, int a, int b)
{
    for (int i = a, j = b; i < j; i = i + 1, j = j - 1)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int n, m;
    printf("enter a number ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("enetr a value");
        scanf("%d", &m);
        arr[i] = m;
    }
    int k;
    printf("enter a number ");
    scanf("%d",&k);
    k=k%n;
    reverse(arr, n, 0, k);
    for (int i = 0; i <= n - 1; i = i + 1)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}