#include<stdio.h>
int main()
{
    printf("enter lenght");
    int l;
    scanf("%d",&l);
    printf("enter breadth");
    int b;
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if (a>p)
    {
        printf("area is greater than perimeter");
    }
    else
    {
        printf("perimeter is greater than area");
    }
    return 0;
}