#include<stdio.h>
int main()
{
    int i,k,n,w,x=0;
    scanf("%d %d %d",&k,&n,&w);
    for(i=w;i>=0;i--){
        x=x+i;
    }
    if(n>=(k*x)) printf("0");
    else if(n<(k*x)) printf("%d",(k*x)-n);
    return 0;
}
