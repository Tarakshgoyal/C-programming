#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    return;
}
int main()
{
    int a,b;
    printf("enter 1st number ");
    scanf("%d",&a);
    printf("enter 2nd number ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("now 1st number is %d and 2nd number is %d",a,b);
    return 0;
}