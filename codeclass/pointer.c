#include<stdio.h>
int main()
{
    int n=3;
    float i;
    printf("%d\n",&n);
    int *a=&n;
    printf("%d\n",*a);
    float arr[]={1,2,34,5,6,7,8,9,1,2,5,63,3,4,4,5,6,7,8,9,0};
    float *m=arr;
    printf("%f\n",*m);
    scanf("%f",&i);
    printf("\n%f",(*arr+1));
    return 0;
}