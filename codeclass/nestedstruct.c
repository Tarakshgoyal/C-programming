#include<stdio.h>
typedef struct stru {
    int a;
    float b;
    int *r;
    struct ptrst
    {
        int dd;
        float ee;
    }*tt;
    
    struct nested {
        char c;
        union abc {
            int k;
            float m;
            int jj;
            struct ak {
                char s;
            } ak;
        } ab;
    } st;
    union nes {
        long long g;
    } n;
} stru;
int main() {
    stru x;
    x.r=&x.a;
    x.a = 10;
    x.tt->dd=78;
    x.tt->ee=7;
    x.b = 56.0;
    x.st.c = 'a';
    x.st.ab.k = 43;
    x.st.ab.m=67;
    x.st.ab.jj=89;
    x.n.g = 57939357;
    x.st.ab.ak.s = 'u'; 
    printf("%d, %f, %c, %d, %lld, %c,%d,%f,%d,%d,%f", x.a, x.b, x.st.c, x.st.ab.k, x.n.g, x.st.ab.ak.s,*x.r,x.st.ab.m,x.st.ab.jj,&x.tt->dd,&x.tt->ee);
    return 0;
}