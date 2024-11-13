#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[15];
        char lastname[15];
        int age;
        int noofmatches;
        float average;
    } crickter;
    crickter arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].noofmatches);
        scanf("%f", &arr[i].average);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", arr[i].firstname);
        printf("%s \n", arr[i].lastname);
        printf("%d \n", arr[i].age);
        printf("%d \n", arr[i].noofmatches);
        printf("%f \n", arr[i].average);
    }
    return 0;
}