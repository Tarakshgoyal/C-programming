#include<stdio.h>
#include<limits.h>
#include<string.h>
int main()
{
    char str[40];
    scanf("%[^\n]s",&str);
    printf("%s ",str);
    // printf("%s ",str);
    puts(str);
    char st[40];
    gets(st);
    printf("%s ",st);
    return 0;
}