#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j,k,temp,a[n],cnt=0,cnt2=0,cnt3=0,cnt4=0;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=n-1;i>=0;i--){
        if(a[i]==4) cnt4++;
        else break;
    }
    for(i;i>=0;i--){
        if(a[i]==3) cnt3++;
        else break;
    }
    for(i;i>=0;i--){
        if(a[i]==2) cnt2++;
        else break;
    }
    for(i;i>=0;i--){
        if(a[i]==1) cnt++;
    }
    k=cnt3-cnt;
    if(k<0) k=k*(-1);
    else k=0;
    k=k+(2*cnt2);
    if(k%4==0) k=k/4;
    else k=(k/4)+1;

    printf("%d",cnt4+cnt3+k);

    return 0;
}
