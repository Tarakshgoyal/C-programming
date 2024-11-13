#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d", &n);
    int marks[n];
    for (int i = 1; i <= n; i = i + 1)
    {
        int m;
        printf("enter value");
        scanf("%d", &m);
        marks[i-1] = m;
    }
    for (int j=0;j<=n-1;j=j+1)
    {
        if (marks[j]<35)
        {
            printf("%d \n",j);
        }
    }
    return 0;
}