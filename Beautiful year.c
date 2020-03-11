#include<stdio.h>
int main()
{
    int n,i,j,r,t,k,a[10000],count=0,temp;
    scanf("%d",&n);
    t=n+1;
    while(1)
    {
       k=t;
       i=0;
       count=0;
       while(1)
       {
           if(k==0) break;
           r=k%10;
           a[i]=r;
           k=k/10;
           i++;
       }
       for(i=0;i<4;i++){
           for(j=0;j<3-i;j++){
               if(a[j]>a[j+1]){
                  temp=a[j];
                  a[j]=a[j+1];
                  a[j+1]=temp;
               }
           }
       }
       for(i=0;i<3;i++){
        if(a[i]==a[i+1]) count++;
       }
       if(count==0) break;
       t++;
    }
    printf("%d",t);
}
