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
#define pp                  pop_up
#define min3(a,b,c)         min(a,min(b,c))
#define max3(a,b,c)         max(a,max(b,c))
#define min4(a,b,c,d)       min(min(a,b),min(c,d))
#define max4(a,b,c,d)       max(max(a,b),max(c,d))
#define max5(a,b,c,d,e)     max(max3(a,b,c),max(d,e))
#define min5(a,b,c,d,e)     min(min3(a,b,c),min(d,e))
#define NUM                 1000000

int main()
{
    fast;
    ll n,m,x,cnt=0;
    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int> > q;
    cin>>n;
    m=n;
    while(n--)
    {
        cin>>x;
        if(n<m-1)
        {
            if(x>pq.top())
                cnt++;
            else if(x<q.top())
                cnt++;
        }
        pq.push(x);
        q.push(x);
    }
    cout<<cnt;
    return 0;
}
