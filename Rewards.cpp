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

int main()
{
    ll n, t1=0, t2=0, c1=0, c2=0;
    for(ll i=0; i<3; i++)
    {
        ll x;
        cin>>x;
        t1+=x;
    }
    //cout<<t1<<endl;
    if(t1)
    {
        if(t1%5)
            c1=(t1/5)+1;
        else
            c1=t1/5;
    }
    //cout<<c1<<endl;
    for(ll i=0; i<3; i++)
    {
        ll x;
        cin>>x;
        t2+=x;
    }
    //cout<<t2<<endl;
    if(t2)
    {
        if(t2%10)
            c2=(t2/10)+1;
        else
            c2=t2/10;
    }
    //cout<<c2<<endl;
    cin>>n;
    if(n>=(c1+c2))
        cout<<"YES";
    else if(!(t1+t2))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
