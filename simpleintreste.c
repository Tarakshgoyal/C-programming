#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("enter principle :");
    scanf("%f",&p);
    printf("\nenter rate: ");
    scanf("%f",&r);
    printf("\nenter time in years : ");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("\nsimple intrest is : %f",si);
    return 0;
}