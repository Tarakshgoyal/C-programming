#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct student
{
    int rollno;
    char name[50];
    char department[50];
    char course[50];
    int year;
} student;
void check(student s1, student s2)
{
    if (strcmp(s1.department, s2.department) == 0)
    {
        printf("they are from same department");
    }
    else
    {
        printf("different department");
    }
    return;
}
int main()
{
    student s1;
    s1.rollno = 1;
    strcpy(s1.name, "raju");
    strcpy(s1.department, "cs");
    strcpy(s1.course, "btech");
    s1.year = 2021;
    student s2;
    s2.rollno = 2;
    strcpy(s2.name, "raj");
    strcpy(s2.department, "cs");
    strcpy(s2.course, "bsc");
    s2.year = 2022;
    check(s1, s2);
    return 0;
}