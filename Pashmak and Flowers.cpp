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
    ll n, mini=1000000001, maxi=0, c1=0, c2=0, diff, num;
    cin>>n;
    ll t = n;
    while(t--)
    {
        ll temp;
        cin>>temp;
        if(temp<mini)
        {
            mini = temp;
            c1=1;
        }
        else if(temp == mini)
            c1++;
        if(temp>maxi)
        {
            maxi = temp;
            c2=1;
        }
        else if(temp == maxi)
            c2++;
    }
    //cout<<c1<<" "<<c2<<endl;
    if(c1 == c2 && c1==n)
        num=((n-1)*n)/2;
    else
        num=c1*c2;

    cout<<(maxi-mini)<<" "<<num;

    return 0;
}
