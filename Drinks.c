#include<stdio.h>
int main()
{
    int n,den,total=0;
    double result;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        total=total+a[i];
    }
    den=n*100;
    result=(double)total/(double)den;
    printf("%.12lf", result*100);
    return 0;
}
