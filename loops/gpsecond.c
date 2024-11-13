#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int a = 3;
    for (int x = 1; x <= n; x = x + 1)
    {
        printf("%d \n", a);
        a = a * 4;
    }
    return 0;
}