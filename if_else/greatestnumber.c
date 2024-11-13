#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter 1st number");
    scanf("%d", &a);
    printf("enter 2nd number");
    scanf("%d", &b);
    printf("enter 3rd number");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("a is largest number");
    }
    if (b > a && b > c)
    {
        printf("b is largest number");
    }
    if (c > a && c > b)
    {
        printf("c is the largest number");
    }
    return 0;
}