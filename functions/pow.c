#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    int b;
    printf("enter a number ");
    scanf("%d",&b);
    int x=pow(a,b);
    printf("%d",x);
    return 0;
}