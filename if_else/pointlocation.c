#include <stdio.h>
int main()
{
    int x, y;
    printf("enter the coordinates");
    scanf("%d %d", &x, &y);
    if (y == 0 && x == 0)
    {
        printf("lies on origin");
    }
    else if (y == 0)
    {
        printf("lies on x axis");
    }
    else if (x == 0)
    {
        printf("lies on y axis");
    }
    else
    {
        printf("lies on xy");
    }
    return 0;
}