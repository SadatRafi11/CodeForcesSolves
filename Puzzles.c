#include<stdio.h>
int main()
{
    int n,m,i,j,temp,k=10000,p,q;
    scanf("%d %d",&n,&m);
    int a[m];
    for(i=0;i<m;i++) scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m-1-i;j++)
        {
           if(a[j]<a[j+1]){
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
           }
        }
    }
    for(i=0;i<=m-n;i++)
    {
        if((a[i]-a[i+(n-1)])<k)
        {
                p=a[i];
                q=a[i+(n-1)];
                k=p-q;
        }
    }
    printf("%d",k);
}
