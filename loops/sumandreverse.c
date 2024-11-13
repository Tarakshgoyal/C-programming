#include <stdio.h>
int main()
{
    int n, r = 0, t;
    printf("enter the number");
    scanf("%d", &n);
    t = n;
    while (n > 0)
    {
        r = r * 10;
        r = r + (n % 10);
        n = n / 10;
    }
    printf("sum of normal and reverse is :%d", t + r);
    return 0;
}