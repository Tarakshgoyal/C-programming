#include<stdio.h>
int main()
{
    int a;
    float b;
    char c[2];
    scanf("%d",&a);
    scanf("%f",&b);
    scanf("%s",c);
    printf("%d %f %s\n",a,b,c);
    printf("%d",sizeof(a));
    return 0;
}