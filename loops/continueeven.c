#include <stdio.h>
int main()
{
    for (int x = 1; x <= 100; x = x + 1)
    {
        if (x % 2 != 0)
        {
            continue;
        }
        printf("%d \n", x);
    }
    return 0;
}