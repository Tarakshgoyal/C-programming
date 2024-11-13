#include <stdio.h>
#include <string.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date arr[3];
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i].day);
        scanf("%d", &arr[i].month);
        scanf("%d", &arr[i].year);
    }
    int a, b;
    for (int i = 0; i < 2; i++)
    {
        printf("%d / %d / %d \n", arr[i].day, arr[i].month, arr[i].year);
        
    }
    a=("%d / %d / %d ", arr[0].day, arr[0].month, arr[0].year);
    bool flag=true;
    if(arr[0].day!=arr[1].day)
    {
        flag=false;
    }
    if(arr[0].month!=arr[1].month)
    {
        flag=false;
    }
    if(arr[0].year!=arr[1].year)
    {
        flag=false;
    }
    if (flag==true)
    {
        printf("the date are same ");
    }
    else
    {
        printf("the dates are different ");
    }
    
    return 0;
}