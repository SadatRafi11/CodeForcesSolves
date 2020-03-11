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
#define mp                  make_pair
#define ms(a,b)             memset((a),(b),sizeof(a))
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000
#define PI		    2*acos(0.0)
#define maximum             (-1*INF)
const int INF = 1e5 + 10 ;

int main()
{
    ll n, m, k, fdr;
    cin>>n>>m>>k;
    ll a[m];
    for(ll i=0; i<m; i++)
        cin>>a[i];
    cin>>fdr;

    ll start=n-2-log2(fdr);
    if(start<0)
        start=-1;

    ll b[n]={};
    for(ll i=n-1; i>start; i--)
    {
        b[i]=fdr%2;
        fdr/=2;
    }

    ll f=0, c;
    for(ll i=0; i<m; i++)
    {
        c=0;
        for(ll j=n-1; j>=0; j--)
        {
            if( (a[i]%2) != b[j] )
                c++;
            a[i]/=2;
        }
        if(c<=k)
            f++;
    }

    cout<<f;

    return 0;
}
