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
#define READ(f) 	        freopen("f", "r", stdin)
#define WRITE(f) 	        freopen("f", "w", stdout)
const int INF = 1e5 + 10 ;

int main()
{
    bool anum[10] = {false};
    bool alet[26] = {false};
    bool flag = false;
    string s;
    cin>>s;
    if(s[0] == 'A')
        alet[0] = true;
    else if(s[0] == 'T')
        alet['T' - 'A'] = true;
    else if(s[0] == 'K')
        alet['K' - 'A'] = true;
    else if(s[0] == 'Q')
        alet['Q' - 'A'] = true;
    else if(s[0] == 'J')
        alet['J' - 'A'] = true;
    else
        anum[s[0] - '0'] = true;
    alet[s[1] - 'A'] = true;
    for(ll i=0; i<5; i++)
    {
        cin>>s;

        if(s[0] == 'A')
        {
            if(alet[0])
                flag = true;
        }
        else if(s[0] == 'T')
        {
            if(alet['T' - 'A'])
                flag = true;
        }
        else if(s[0] == 'K')
        {
            if(alet['K' - 'A'])
                flag = true;
        }
        else if(s[0] == 'Q')
        {
            if(alet['Q' - 'A'])
                flag = true;
        }
        else if(s[0] == 'J')
        {
            if(alet['J' - 'A'])
                flag = true;
        }
        else
        {
            if(anum[s[0] - '0'])
                flag = true;
        }

        if(alet[s[1] - 'A'])
            flag = true;
    }
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
