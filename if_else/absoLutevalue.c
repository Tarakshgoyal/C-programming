#include<stdio.h>
int main()
{
    printf("enter a number");
    int x;
    scanf("%d",&x);
    if(x<0)
    {
        x=x*(-1);
        
    }
    printf("the absolute value is %d",x);
    
    return 0;
}