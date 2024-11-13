#include<stdio.h>
    // int n,m,a,c,sum2=0,sum=0,t=1,l=1;
    // scanf("%d",&n);
    // scanf("%d",&m);
    // a=n;
    // while(a>0)
    // {
    //     int b=a%10;
    //     sum=sum+b*t;
    //     t=t*2;
    //     a=a/10;
    // }
    // c=m;
    // while(c>0)
    // {
    //     int b=c%10;
    //     sum2=sum2+b*l;
    //     l=l*2;
    //     c=c/10;
    // }
    // printf("the normal number of %d binary number is %d\n",n,sum);
    // printf("the normal number of %d binary number is is %d\n",m,sum2);
    



void decToBinary(int n,int m) {
    int binaryNum[60];
    int binaryNum2[60];
    int i = 0,k=0;
    
    while (m > 0) {
        binaryNum2[k] = m % 2;
        m = m / 2;
        k++;
    }
    
    for (int j = k - 1; j >= 0; j--)
    {
        printf("%d", binaryNum2[j]);
    }
    printf("\n");
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binaryNum[j]);
    }
    if(binaryNum[i-1] & binaryNum2[k-1])
    {
        printf("\nodd\n");
    }
    else{
        printf("even\n");
    }
}
int main() {
    int n,m;
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("Enter a decimal number: ");
    scanf("%d", &m);
    printf("Binary equivalent: ");
    decToBinary(n,m);
    return 0;
}