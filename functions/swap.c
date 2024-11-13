#include <stdio.h>
int main()
{
    int a;
    printf("a is ");
    scanf("%d", &a);
    int b;
    printf("b is  ");
    scanf("%d", &b);
    // int temp;
    // temp = a;
    // a = b;
    // b = temp;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("now a is %d\n", a);
    printf("now b is %d", b);
    return 0;
}