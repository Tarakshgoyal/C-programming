#include<stdio.h>
typedef struct complex {
    float re;
    float im;
}complex;
complex add(complex *a,complex *b)
{
    complex s;
    s.im=a->im+b->im;
    s.re=a->re+b->re;
    return s;
}
int main()
{
    complex sum,a,b;
    a.im=2; 
    a.re=6;
    b.im=3;
    b.re=9;
    sum=add(&a,&b);
    printf("the sum is %f + %fi",sum.re,sum.im);
    return 0;
}