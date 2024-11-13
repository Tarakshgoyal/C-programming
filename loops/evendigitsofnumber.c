#include <stdio.h>
int main()
{
    int n, x, s = 0;
    printf("enter the number");
    scanf("%d", &n);
    while (n != 0)
    {
        x = n % 10;
        if (x % 2 == 0)
        {
            printf("%d ", x);
            s = s + x;
        }
        n = n / 10;
    }
    printf("sum is : %d", s);
    return 0;
}