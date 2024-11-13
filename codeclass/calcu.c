#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b;
    printf("enter number to calculate\n");
    scanf("%d",&a);
    scanf("%d",&b);
    switch(n)
    {
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a*b);
            break;
        case 3:
            printf("%d",a/b);
            break;
        case 4:
            printf("%d",a-b);
            break;
        default:
            printf("enter number between 1 and 4");
            break;
    }
    return 0;
}