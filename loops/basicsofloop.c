#include <stdio.h>
int main()
{
    int n;
    printf("number of times you want to print");
    scanf("%d",&n);
    for (int i = 1; i <= n; i=i+1)
    {
        printf("%d hello\n",i);
    }
    return 0;
}