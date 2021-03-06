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
    ll n,t=0;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
            t+=4;
        else if(s=="Cube")
            t+=6;
        else if(s=="Octahedron")
            t+=8;
        else if(s=="Dodecahedron")
            t+=12;
        else if(s=="Icosahedron")
            t+=20;
    }
    cout<<t;
    return 0;
}
