#include<stdio.h>
int main()
{
    int a,b,c,i,j,temp;
    scanf("%d %d %d",&a,&b,&c);
    int ar[5];
    ar[0]=a+b+c;
    ar[1]=(a+b)*c;
    ar[2]=a*(b+c);
    ar[3]=a*b*c;
    ar[4]=(a*b)+c;
    for(i=0;i<5;i++){
        for(j=0;j<4-i;j++){
            if(ar[j]>ar[j+1]){
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    printf("%d",ar[4]);
    return 0;
}
