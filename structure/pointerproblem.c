#include<stdio.h>
int main()
{
    int x=5;
    int y=7;
    int* a=&x;
    int* b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}