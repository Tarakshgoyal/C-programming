#include<stdio.h>
#include<string.h>
int main()
{
    char fr[5][20];
    for(int i=0;i<5;i++)
    {
        printf("enter friend's name\t");
        scanf("%s",fr[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("your friend's name\t");
        printf("%s\n",fr[i]);
    }
    return 0;
}