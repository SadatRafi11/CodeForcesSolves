#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        unsigned long long int x,y;
        scanf("%llu %llu", &x, &y);
        x=(x*x)*2;
        y=(y*y)*4;
        if(x>y) printf("1\n");
        else printf("2\n");
    }
    return 0;
}
