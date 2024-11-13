#include <stdio.h>
int main()
{
    int x;
    printf("enter the number : ");
    scanf("%d", &x);
    if (x % 5 == 0)
    {
        if (x % 3 == 0)
        {
            printf("the number is divisible by 5 and 3");
        }
    }
    else
    {
        printf("the no. is not divisible");
    }
    return 0;
}