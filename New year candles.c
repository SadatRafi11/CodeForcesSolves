#include<stdio.h>
int main()
{
    int a, b, c, r=0, t=0;
    scanf("%d %d", &a, &b);
    t=a;
    while(1)
    {
        t=t+(a/b);
        a=(a/b)+(a%b);
        if(a<b) break;
    }
    printf("%d", t);
    return 0;
}
