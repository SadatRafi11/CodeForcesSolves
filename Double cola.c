#include<stdio.h>
int main()
{
    long long int r,n,i=1,total=0,temp;
    scanf("%I64d", &n);
    while(1)
    {
        temp=total;
        total=total+(5*i);
        i=i*2;
        if(total>n) break;
    }
    i=i/2;
    if((n-temp)%i)
        {
            r=((n-temp)/i)+1;
        }
    else
        {
            r=(n-temp)/i;
        }

    if(r==0) printf("Howard");
    else if(r==1) printf("Sheldon");
    else if(r==2) printf("Leonard");
    else if(r==3) printf("Penny");
    else if(r==4) printf("Rajesh");
    else if(r==5) printf("Howard");

    return 0;
}
