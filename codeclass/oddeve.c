#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(1)
    {
        case 1:
        if(n%2==0)
        {
            printf("even");
            break;
        }
        case 2:
        printf("odd");
        break;
    }
    return 0;
}