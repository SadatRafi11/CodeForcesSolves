#include<stdio.h>
#include<string.h>
int ar[10001];

int fn( int n ) {
    if(n<6)
        return ar[n];
    if(ar[n]!=0)
        return ar[n];
    ar[n]=( fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6) );
    return ar[n];
}
int main()
{
    freopen ( "out.txt" , "w" , stdout ) ;
    int n, caseno = 0, cases;
    scanf("%d", &cases);
    while( cases-- ) {
        memset(ar+6, 0, 10001);
        int a, b, c, d, e, f;
        scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        ar[0]=a;
        ar[1]=b;
        ar[2]=c;
        ar[3]=d;
        ar[4]=e;
        ar[5]=f;
        printf("Case %d: %d\n", ++caseno, fn(n) % 10000007);

    }
    return 0;
}
