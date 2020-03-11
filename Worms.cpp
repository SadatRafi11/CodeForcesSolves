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
#define PI		            2*acos(0.0)
#define maximum             (-1*INF)
const int INF = 1e5 + 10 ;

vector<ll> v;

ll binarySearch(ll x, ll i, ll j)
{
    ll n = j-i+1;

    if(n==1)
        return i+1;
    else if(j == v.size()-1 && n==2)
    {
        if(x <= v[v.size()-1] && x > v[v.size()-2])
            return v.size();
        else
            return v.size()-1;
    }
    else if(i == 0 && n==2)
    {
        if(x <= v[1] && x > v[0])
            return 2;
        else
            return 1;
    }
    else
    {
        if( (x <= v[(n/2)+i] ) && (x > v[(n/2)-1+i] ) )
            return (n/2)+i+1;
        else if(x > v[(n/2)+i])
            binarySearch(x, (n/2)+1+i, j);
        else if(x <= v[(n/2)-1+i])
            binarySearch(x, i, (n/2)-1+i);
    }
}

int main()
{
    ll n, temp;
    cin>>n;
    for(ll i=0; i<n; i++)
    {
        cin>>temp;
        if(!i)
            v.pb(temp);
        else
            v.pb(v[i-1]+temp);
    }

    ll m;
    cin>>m;
    while(m--)
    {
        cin>>temp;
        cout<<binarySearch(temp, 0, n-1)<<endl;
    }

    return 0;
}
