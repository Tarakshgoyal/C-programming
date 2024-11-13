#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4};
    printf("%p \n",&a[0]);
    printf("%p \n",&a[1]);
    printf("%p \n",&a[2]);
    printf("%p \n",&a[3]);
    char arr[5]={'a','b','c','d','e'};
    printf("%p ",&arr[0]);
    printf("%p ",&arr[1]);
    printf("%p ",&arr[2]);
    printf("%p ",&arr[3]);
    printf("%p ",&arr[4]);
    char ch='\0';//null character
    int x=0;
    char b=(char)x;
    printf("%d ",b);
    char crr[]="hello hello mic check check";
    int i=0;
    while(crr[i]!='\0')
    {
        printf("%c ",crr[i]);
        i++;
    }
    return 0;
}