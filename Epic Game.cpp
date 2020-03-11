#include<bits/stdc++.h>
using namespace std;

#define ll                  long long int
#define llu                 long long unsigned
#define ld                  long double
#define fast                ios_base::sync_with_stdio(0);cin.tie(0);
#define endl                "\n"
#define pb                  push_back
#define bp                  pop_back
#define pf                  push_front
#define fp                  pop_front
#define pp                  pop_up
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000

int gcd(ll x, ll y)
{
    if(y==0)
        return x;
    if(x%y==0)
        return y;
    else
        gcd(y,x%y);
}

int main()
{
    fast;
    ll a,b,n,cnt=1,temp,flag=0;
    cin>>a>>b>>n;
    while(1)
    {
        if(cnt%2)
        {
            if(a<n)
                temp=gcd(n,a);
            else
                temp=gcd(a,n);
            n=n-temp;
            if(n<=0)
            {
                flag++;
                break;
            }
        }
        else
        {
            if(b<n)
                temp=gcd(n,b);
            else
                temp=gcd(b,n);
            n=n-temp;
            if(n<=0)
                break;
        }
        cnt++;
    }
    if(flag)
        cout<<0;
    else
        cout<<1;
    return 0;
}
