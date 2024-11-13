#include <stdio.h>
int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int sum = 0;
        int j = i;
        while (j > 0)
        {
            int a = j % 10;
            sum = (sum * 10) + a;
            j = j / 10;
        }
        if (i != sum)
        {
            printf("no %d is not palindrom \n", i);
        }
        else
        {
            printf("yes %d is a palindrom \n", i);
        }
    }
    return 0;
}