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
    ll n,flag=0;
    cin>>n;
    ll x;
    while(n--)
    {
        cin>>x;
        if(x==1)
            flag=1;
    }
    if(!flag)
        cout<<"EASY"<<endl;
    else
        cout<<"HARD"<<endl;
    return 0;
}
