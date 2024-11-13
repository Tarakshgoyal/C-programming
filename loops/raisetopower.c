#include <stdio.h>
int main()
{
    int a, b, n = 1;
    printf("enter base value ");
    scanf("%d", &a);
    printf("enter power value");
    scanf("%d", &b);
    for (int i = 1; i <= b; i = i + 1)
    {
        n = a * n;
    }
    printf("answer is %d ", n);
    return 0;
}