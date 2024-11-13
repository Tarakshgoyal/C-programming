#include <stdio.h>
int main()
{
    int n;
    printf("enter an odd number ");
    scanf("%d", &n);
    int nsp = n/2, nst = 1, ml = n / 2 + 1;
    for (int i = 1; i <= n; i = i + 1)
    {
        for (int j = 1; j <= nsp; j = j + 1)
        {
            printf("  ");
        }
        for (int k = 1; k <= nst; k = k + 1)
        {
            printf("* ");
        }
        if (i < ml)
        {
            nsp = nsp - 1;
            nst = nst + 2;
        }
        else
        {
            nsp = nsp + 1;
            nst = nst - 2;
        }
        printf("\n");
    }
    return 0;
}