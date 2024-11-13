#include <stdio.h>
int main()
{
    int r, s, a;
    printf("enter age of ram");
    scanf("%d", &r);
    printf("age of shyam");
    scanf("%d", &s);
    printf("enter age of ajay");
    scanf("%d", &a);
    if (r < s)
    {
        if (r < a)
        {
            printf("r is youngest");
        }
        if (a < r)
        {
            printf("a is youngest");
        }
    }
    else
    {
        if (s < a)
        {
            printf("s is youngest");
        }
        else
        {
            printf("a is youngest");
        }
    }
    return 0;
}