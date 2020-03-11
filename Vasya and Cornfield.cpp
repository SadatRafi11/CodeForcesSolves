#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define ll long long int
#define llu unsigned long long int
#define lf long double
#define endl "\n"
#define NUM 1000000

int main()
{
    ll d,n,m;
    cin>>n>>d;
    cin>>m;
    while(m--)
    {
        ll x,y;
        cin>>x>>y;
        if((x>=(n-d)&&x<=d)&&(y>=(n-d)&&y<=d))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
