#include<stdio.h>
typedef struct complex{
    float a;
    float b;
}complex;
complex sum (complex x,complex y)
{
    complex s;
    s.a=x.a+y.a;
    s.b=x.b+y.b;
    return s;
}
complex minus (complex x,complex y)
{
    complex s;
    s.a=x.a-y.a;
    s.b=x.b-y.b;
    return s;
}
complex mul (complex x,complex y)
{
    complex s;
    s.a=(x.a*y.a)-(x.b*y.b);
    s.b=(x.b+y.a)+(x.a*y.b);
    return s;
}
int main()
{
    complex x,y;
    printf("enter the complex numbers ");
    scanf("%f",&x.a);
    scanf("%f",&x.b);
    scanf("%f",&y.a);
    scanf("%f",&y.b);
    printf("press 1 for addition\npress 2 for subtraction\npress 3 for multiply\npress 4 for conjugate");
    int f;
    scanf("%d",&f);
    switch (f)
    {
        case 1:
        {
            complex (*fnptr)(complex,complex)=&sum;
            complex s=(*fnptr)(x,y);
            printf("sum of to complex number is %f + %fi",s.a,s.b);
            break;
        }
        case 2:
        {
            complex (*fnptr1)(complex,complex)=&minus;
            complex t=(*fnptr1)(x,y);
            printf("minus of to complex number is %f + %fi",t.a,t.b);
            break;
        }
        case 3:
        {    
            complex (*fnptr2)(complex,complex)=&mul;
            complex u=(*fnptr2)(x,y);
            printf("mul of to complex number is %f + %fi",u.a,u.b);
            break;
        }
        case 4:
        {
            printf("conjugate of to complex number is %f - %fi\n",x.a,x.b);
            printf("conjugate of to complex number is %f - %fi",y.a,y.b);
            break;
        }
        default:
        {    printf("enter a valid number ");
            break;
        }
    }
    return 0;
}