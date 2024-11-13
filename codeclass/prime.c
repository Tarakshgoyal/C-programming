#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==2)
    {
        printf("the number %d is prime",n);
    }
    else
    {
        bool flag=true;
        for(int i=2;i<=(n/2)+1;i++)
        {
            if(n%i==0)
            {
                flag=false;
                break;
            }
        }
        if(flag==true)
        {
            printf("the number %d is prime\n",n);
        }
        else
        {+
            printf("the number %d is not prime",n);
        }
    }
    return 0;
}