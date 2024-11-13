#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(1)
    {
        case 1:
        if(n==0)
        {
            printf("0");
            break;
        }
        case 2:
        if(n>0)
        {
            printf("+ve");
            break;
        }
        case 3:
        printf("-ve");
        break;
    }
    return 0;
}