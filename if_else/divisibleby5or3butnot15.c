#include <stdio.h>
int main()
{
    printf("enter the number");
    int x;
    scanf("%d", &x);
    if (x % 5 == 0 || x % 3 == 0)
    {
        if (x % 15 != 0)
        {
            printf("conditions varified");
        }
        else
        {
            printf("divisible by 15");
        }
    }
    else
    {
        printf("all conditions have failed to be varified");
    }
    return 0;
}  