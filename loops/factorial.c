#include <stdio.h>
int main()
{
    int n, m = 1;
    printf("enter a number ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        m = m * i;
        printf("%d! = %d \n", i, m);
    }
    // printf("%d", m);
    return 0;
}