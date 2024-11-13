#include <stdio.h>
int main()
{
    printf("enter a number");
    int n;
    scanf("%d", &n);
    float a = 100;
    for (int x = 1; x <= n; x = x + 1)
    {
        printf("%f \n", a);
        a = a / 2;
    }
    return 0;
}