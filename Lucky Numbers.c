#include<stdio.h>
int main()
{
    int n,t,i,x,count=0;
    scanf("%d",&n);
    t=n;
    i=0;
    while(1)
    {
        if(t==0) break;
        x=t%10;
        t=t/10;
        if(x==4||x==7) count++;
        i++;
    }
    if(count==i) printf("YES");
    else if(n%4==0||n%7==0) printf("YES");
    else if(n%47==0||n%74==0) printf("YES");
    else if(n%444==0||n%777==0||n%447==0||n%474==0||n%744==0||n%774==0||n%747==0||n%477==0) printf("YES");
    else printf("NO");
    return 0;
}
