#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i = i + 1)
    {
        fact = fact * i;
    }
    return fact;
}
int combination(int n, int r)
{
    int nfact = factorial(n), rfact = factorial(r), nrfact = factorial(n - r);
    int ncr = nfact / (rfact * nrfact);
    return ncr;
}
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d", &n);
    int r;
    printf("enter r : ");
    scanf("%d", &r);
    int ncr = combination(n, r);
    printf("%d", ncr);
    return 0;
}