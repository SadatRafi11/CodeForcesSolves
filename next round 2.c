#include <stdio.h>
int main ()
{
    int n,k,i,j;
    scanf ("%d %d",&n,&k);
    int ara[n];
    for (i=0;i<n;i++) {
        scanf("%d",&ara[i]);
    }
    j=k;
    for (i=k;ara[i]==ara[k-1];i++){
        j=j+1;
    }
    if (ara[k-1]!=0){
        printf ("%d",j);
    }
    else if (ara[k-1]==0) {
        for (i=0;ara[i]!=0;i++){

        }
        printf ("%d",i);
    }
    return 0;
}
