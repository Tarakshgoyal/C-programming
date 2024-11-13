#include<stdio.h>
void swap(int* x,int* y)
{
    *x=*x+*y;
    *y=*x-*y;
    *x=*x-*y;
    return;
}
int main()
{
    int a;
    printf("enter value of a ");
    scanf("%d",&a);
    int b;
    printf("enter value of b ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a is now %d\n",a);
    printf("b is now %d",b);
    return 0;
}