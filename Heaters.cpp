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
    ll n,m,r,tmp,flag=0,c=0,c1=0;
    cin>>n>>r;
    m=n;
    while(m--)
    {
        cin>>tmp;
        if(tmp==0)
            c++;
        else
        {
            c=0;
            c1++;
        }
        if(c>r)
            flag++;
    }
    if(flag)
        cout<<-1;
    else
    {
        if(n%r)
        {
            if((n/r)>c1)
                cout<<c1;
            else
                cout<<n/r;
        }
        else
            cout<<n/r;
    }
    return 0;
}
