#include<stdio.h>
int main()
{
    printf("enter cost price");
    int c;
    scanf("%d",&c);
    printf("enter selling price");
    int s;
    scanf("%d",&s);
    if(s>c)
    {
        s=(s-c);
        printf("profit made is %d",s);
    }
    else
    {
        c=(c-s);
        printf("loss suffered is %d",c);
    }
    return 0;
}