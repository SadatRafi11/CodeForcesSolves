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
#define                     PI 2*acos(0.0)
#define maximum             (-1*INF)
const int INF = 1e5 + 10 ;

ll product(ll x)
{
    ll prod = 1;
    while(x)
    {
        prod *= (x % 10);
        x /= 10;
    }
    return prod;
}

ll to_num(string s)
{
    ll len=s.size(), num=0;
    for(ll i=len-1, j=1; i>=0; i--, j*=10)
    {
        num+=((s[i]-'0')*j);
    }
    return num;
}

int main()
{
    string s;
    cin>>s;
    ll ans=product(to_num(s));
    ll len=s.size();
    for(ll i=0; i<len; i++)
    {
        if(s[i]=='0')
            continue;
        string a=s;
        a[i]=a[i]-1;
        for(ll j=i+1; j<len; j++)
            a[j]='9';
        ll num=product(to_num(a));
        if(num>ans)
            ans=num;
    }
    cout<<ans;
    return 0;
}
