#include<stdio.h>
int main()
{
    char a[19];
    scanf("%s", a);
    int l,i,c0=0,c7=0,c5=0,c2=0,p0=18,p2=18,p5=18,p7=18;
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]=='0') c0++;
        else if(a[i]=='5') c5++;
        else if(a[i]=='2') c2++;
        else if(a[i]=='7') c7++;
    }
    if(c0==0&&c5==0)
    {
        printf("-1");
        return 0;
    }
    for(i=0; i<l; i++)
    {
        if(a[i]=='0'&&c0==1)
        {
            if(p0>(l-i)) p0=l-i;
        }
        else if(a[i]=='5')
        {
            if(p5>(l-i)) p5=l-i;
        }
        else if(a[i]='2')
        {
            if(p2>(l-i)) p2=l-i;
        }
        else if(a[i]=='7')
        {
            if(p7>(l-i)) p7=l-i;
        }
    }

}
