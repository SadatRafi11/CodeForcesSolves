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
    ll n,k,temp,flag=0,counter=0,sum=0,i;
    cin>>n>>k;
    while(n--)
    {
        cin>>temp;
        sum=sum+temp;
        if(sum==0&&flag==0)
            flag=0;
        else if((sum>=k)||(flag))
        {
            if(sum>=k)
            {
                i=sum/k;
                counter=counter+i;
                if((n==0)&&(sum%k))
                {
                   counter++;
                }
                sum=sum-(i*k);
            }
            else
            {
                if(sum!=0)
                    counter++;
                sum=0;
            }
            flag=0;
        }
        else if(n==0)
        {
            if(sum!=0)
                counter++;
        }
        else
            flag=1;
    }
    cout<<counter;
    return 0;
}
