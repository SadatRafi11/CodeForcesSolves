#include<stdio.h>
int main()
{
    int n, m, count=0;
    scanf("%d %d", &n ,&m);
    while(n)
    {
        count++;
        if(count%m==0) n=n;
        else n--;
    }
    printf("%d", count);
    return 0;
}
