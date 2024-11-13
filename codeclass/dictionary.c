#include<stdio.h>
#include<string.h>
int main()
{
    char ha[100];
    fgets(ha,100,stdin);
    int j=0,n=0;
    char a[n];
    for(int i=97;i<=122;i++)
    {
        
        if((int)ha[j]==32)
        {
            j++;
            a[n]='_';
            n++;
            continue;
        }
        a[n]=(char)i;
        for(int k=0;k<n+1;k++)
        {
            printf("%c",a[k]);
        }
        if((int)ha[j]==i)
        {
            a[n]=ha[j];
            n++;
            j++;
            i=96;
        }
        if(((strlen(ha))-1)==n)
        {
            break;
        }
        printf("\n");
    }
    return 0;
}