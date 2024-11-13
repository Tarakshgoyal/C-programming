#include<stdio.h>
#include<string.h>
int main()
{
    char str[15];
    puts("enter a string");
    scanf("%[^\n]s",&str);
    // gets(str);
    puts("size is");
    int size =0;
    int i=0;
    while(str[i]!='\0')
    {
        size++;
        i++;
    }
    for(int i=0,j=size-1;i<=j;i++,j--)
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("the reverse is");
    puts(str);
    return 0;
}