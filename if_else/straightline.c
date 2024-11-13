#include <stdio.h>
int main()
{
    int x1, x2, x3, y1, y2, y3;
    float m1, m2;
    printf("enter 1st x coordinate");
    scanf("%d", &x1);
    printf("enter 1st coordinate of y");
    scanf("%d", &y1);
    printf("enter 2nd coordinate of x");
    scanf("%d", &x2);
    printf("enter 2nd coordinate of y");
    scanf("%d", &y2);
    printf("enter 3rd coordinate of x");
    scanf("%d", &x3);
    printf("enter 3rd coordinate of y");
    scanf("%d", &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("the given coordinate lines on straight line");
    }
    else
    {
        printf("the given coordinates doesn't lies on straight line");
    }
    return 0;
}