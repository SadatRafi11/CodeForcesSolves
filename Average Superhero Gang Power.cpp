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
#define NUM                 1000000
#define                     PI 2*acos(0.0)

int main()
{
    ll n,k,m,x,tmp,total=0,mx=0,cnt=0;
    vector<int> v;
    cin>>n>>k>>m;
    x=n;
    while(x--)
    {
        cin>>tmp;
        if(tmp>mx)
            mx=tmp;
        else if(tmp==mx)
            cnt++;
        v.pb(tmp);
        total+=tmp;
    }
    cnt++;
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    tmp=cnt*k;
    while(tmp>m)
    {
        cnt--;
        tmp=cnt*k;
    }
    m=m-tmp;
    while(m>0 && n>1)
    {
        total-=v[v.size()-1];
        v.bp();
        n--;
        m--;
    }
    while(tmp--)
        total++;
    ld ans;
    ans=((double)total)/((double)n);
    cout<<fixed<<setprecision(20);
    cout<<ans;
    return 0;
}
