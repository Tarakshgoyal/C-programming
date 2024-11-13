#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    if (n == 2)
    {
        printf("2 is a prime number ");
    }
    else if (n == 1)
    {
        printf("1 is not a prime number");
    }
    else if (n == 0)
    {
        printf("0 is not a prime number");
    }
    else
    {
        for (int x = 2; x <= n - 1; x = x + 1)
        {
            if (n % x == 0)
            {
                printf("%d is not a prime number", n);
                break;
            }
            else
            {
                printf("%d is a prime number", n);
                break;
            }
        }
    }
    return 0;
}