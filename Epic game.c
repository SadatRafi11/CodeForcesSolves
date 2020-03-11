#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int a,b,n;
    scanf("%d %d %d", &a, &b, &n);

}
int gcd(int x,int y)
{
    if(x==y)
        return x;
    else if(x<y)
        return gcd(y-x,x);
    else
        return gcd(x-y,y);
}
