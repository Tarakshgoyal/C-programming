#include<stdio.h>
#include<math.h>
typedef struct cord{
    float x;
    float y;
}cord;
float dist(cord *a, cord *b)
{
    float d1=sqrt((a->x)*(a->x) + (a->y)*(a->y));
    float d2=sqrt((b->x)*(b->x) + (b->y)*(b->y));
    float d=d1+d2;
    return d;
}
int main()
{
    cord a,b;
    scanf("%f",&a.x);
    scanf("%f",&a.y);
    scanf("%f",&b.x);
    scanf("%f",&b.y);
    float (*fnptr)(cord,cord)=&dist;
    float de=(*fnptr)(a,b);
    float d=dist(&a,&b);
    printf("the distance between both the coords is %f",d);
    return 0;
}