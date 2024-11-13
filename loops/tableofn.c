#include <stdio.h>
int main()
{
    int n, x;
    printf("enter the number of which you want to see table");
    scanf("%d", &n);
    for (x = 1; x <=10; x = x + 1)
    {
        printf("%d x %d = %d \n",n,x,n*x);
    }
        return 0;
}