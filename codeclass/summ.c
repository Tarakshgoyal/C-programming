#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*ptr)(int a,int b)= &sum;
    int c=(*ptr)(10,2);
    printf("%d",c);
    return 0;
}