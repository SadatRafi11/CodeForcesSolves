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
    ll n,t,flag=0,i=0;
    char s[105];
    cin>>n>>t;
    if(t==2||t==4||t==8)
    {
        while(n--)
            s[i++]='8';
    }
    else if(t==5)
    {
        while(n--)
            s[i++]='5';
    }
    else if(t==3||t==9)
    {
        while(n--)
            s[i++]='9';
    }
    else if(t==6)
    {
        while(n--)
            s[i++]='6';
    }
    else if(t==7)
    {
        while(n--)
            s[i++]='7';
    }
    else if(t==10)
    {
        if(n==1)
            flag++;
        else
        {
            s[i++]='1';
            n--;
            while(n--)
                s[i++]='0';
        }
    }
    s[i]='\0';
    if(flag)
        cout<<-1;
    else
        cout<<s;

    return 0;
}
