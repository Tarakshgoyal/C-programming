#include <stdio.h>
#include <string.h>
int main()
{
    struct book
    {
        char name[50];
        int noofpage;
        float price;
    } a, b, c;
    a.noofpage = 100;
    a.price = 411.5;
    strcpy(a.name,"secreat seven");
    printf("%d\n",a.noofpage);
    printf("%f \n",a.price);
    printf("%s\n",a.name);
    return 0; 
}