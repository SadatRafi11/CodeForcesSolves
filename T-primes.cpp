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
    fast;
    ll n=NUM,t;
    ld sq,tmp;
    vector<int> p;
    bool status[(n>>1)+1];
    for(ll i=1; i<=(n>>1); i++)
        status[i]=false;
    p.pb(2);
    for(ll i=3,k=1; i<=n; i+=2)
    {
        if(!status[i>>1])
        {
            p.pb(i);
            for(ll j=i*i; j<=n; j=j+(i<<1))
                status[j>>1]=true;
        }
    }
    cin>>t;

    while(t--)
    {
        cin>>tmp;
        sq=sqrt(tmp);
        if(tmp==1.0)
            cout<<"NO"<<endl;
        else if((sq==(int(sq)))&&((int(sq))==2))
            cout<<"YES"<<endl;
        else if((sq==(int(sq)))&&((int(sq))%2))
        {
            if(!status[(int(sq))>>1])
                cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
