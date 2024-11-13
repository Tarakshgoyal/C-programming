#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="college wallah";
    char*ptr=str;
    str[0]='M';
    printf("%s ",ptr);
    return 0;
}