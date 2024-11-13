#include <stdio.h>
#include<string.h>
int main()
{
    struct std
    {
        char name[50];
        long sapid;
        int age;
    } a;
    a.sapid = 590011425;
    a.age = 17;
    strcpy(a.name,"Taraksh Goyal");
    printf("%d\n",a.sapid);
    printf("%d \n",a.age);
    printf("%s\n",a.name);
    return 0;
}//pandas, numpy, cycat,andrew ng,free code camp, matplotlib, seaborn