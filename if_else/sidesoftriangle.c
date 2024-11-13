#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter length of 1st side of triangle");
    scanf("%d",&a);
    printf("enter length of 2nd side of triangle");
    scanf("%d",&b);
    printf("enter length of 3rd side of triangle");
    scanf("%d",&c);
    if ((a+b)>c && (b+c)>a && (a+c)>b)
    {
        printf("%d,%d,%d are the sides of triangle",a,b,c);
    }
    else
    {
        printf("the given lengths can't the the length of sides of triangle");
    }
    return 0;
}