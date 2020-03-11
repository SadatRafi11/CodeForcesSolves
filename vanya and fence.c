#include<stdio.h>
int main()
{
    int x,n,i,h,count=0;
    scanf("%d %d", &n, &h);
    i=n;
    while(i--)
    {
        scanf("%d", &x);
        if(x>h) count++;
    }
    printf("%d", n+count);
    return 0;
}
