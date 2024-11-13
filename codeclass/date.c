#include<stdio.h>
int main()
{
    long date;
    scanf("%d",&date);
    int year=date%10000;
    date=date/10000;
    int mon=date%100;
    date=date/100;
    int day=date%100;
    printf("%d/%d/%d",day,mon,year);
    return 0;
}