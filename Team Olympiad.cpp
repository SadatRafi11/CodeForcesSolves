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
    fast;
    ll n,tmp,l,c1=0,c2=0,c3=0,i=1;
    cin>>n;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    while(n--)
    {
        cin>>tmp;
        if(tmp==1)
            v1.pb(i);
        else if(tmp==2)
            v2.pb(i);
        else if(tmp==3)
            v3.pb(i);
        i++;
    }

    if(v1.size()&&v2.size()&&v3.size())
    {
        l=min3(v1.size(),v2.size(),v3.size());
        cout<<l<<endl;
        i=0;
        while(l--)
        {
            cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<endl;
            i++;
        }
    }
    else
        cout<<0;

    return 0;
}
