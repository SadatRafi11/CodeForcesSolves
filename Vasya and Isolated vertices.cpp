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
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000+10
#define                     PI 2*acos(0.0)

int main()
{
    ll n,m,mn,mx;
    ld x;
    cin>>n>>m;
    if(m==0)
        mx=n;
    else
    {
        x=(sqrt(1.0+(8.0*m))+1.0)/2.0;
        mx=n-int(ceil(x));
    }
    if((m*2)>=n)
        mn=0;
    else
        mn=n-(m*2);

    cout<<mn<<" "<<mx;
    return 0;
}
