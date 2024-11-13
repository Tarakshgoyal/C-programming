#include<stdio.h>
typedef struct stru {
    
    struct ptrst
    {
        int dd;
        float ee;
    }*tt;
    
    
} stru;
int main() {
    stru x;
    
    x.tt->dd=78;
    x.tt->ee=7;
    
    printf("%d,%f", x.tt->dd,x.tt->ee);
    return 0;
}