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
    ll a, b, c, d, ar[7], total=0;
    cin>>a>>b>>c>>d;
    ar[2]=a;
    ar[3]=b;
    ar[5]=c;
    ar[6]=d;
    while(1)
    {
        if(ar[2] && ar[5] && ar[6])
        {
            total+=256;
            ar[2]--;
            ar[5]--;
            ar[6]--;
        }
        else if(ar[2] && ar[3])
        {
            total+=32;
            ar[2]--;
            ar[3]--;
        }
        else
            break;

    }
    cout<<total;
    return 0;
}
