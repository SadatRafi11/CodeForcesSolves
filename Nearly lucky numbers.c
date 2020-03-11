#include<stdio.h>
int main()
{
    long long int n,count=0,r,t,i=0,count1=0;
    scanf("%I64d",&n);
    t=n;
    while(1)
    {
        if(t==0) break;
        r=t%10;
        t=t/10;
        if(r==4||r==7) count++;
    }
    t=count;
    while(1)
    {
        if(t==0) break;
        r=t%10;
        t=t/10;
        if(r==4||r==7) count1++;
        i++;
    }
    if(count==0) printf("NO");
    else if(count1==i) printf("YES");
    else printf("NO");
    return 0;
}
