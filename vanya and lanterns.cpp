#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    long long int n,i;
    double x=0,y,z,l;
    scanf("%I64d %lf", &n, &l);
    double a[n];
    for(i=0; i<n; i++)
        scanf("%lf", &a[i]);
    sort(a,a+n);

    for(i=0; i<n-1; i++)
    {
        if((a[i+1]-a[i])>x)
            x=a[i+1]-a[i];
    }
    y=a[0]-0.0;
    z=l-a[n-1];
    x=x/2.0;
    if(x>y&&x>z)
        printf("%.10lf", x);
    else if(y>x&&y>z)
        printf("%.10lf", y);
    else
        printf("%.10lf", z);
    return 0;
}
