#include <stdio.h>
int main()
{
    if (2 + 3 % 5)
    {
        printf("this works");
    }
    if (10)
    {
        printf("even this works");
    }
    if (-5)
    {
        printf("surprisingly this also works");
    }
    return 0;
}