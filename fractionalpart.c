#include<stdio.h>
int main()
{
    float x ;
    printf("enter a decimal no. ");
    scanf("%f",&x);
    int y=x;
    float z = x - y;
    printf("fractional part is : %f ", z);
    return 0;
}