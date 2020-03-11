#include<stdio.h>
int main()
{

	long long int n,m,a,x,y;
	scanf("%lli%lli%lli",&n,&m,&a);
	if(n%a==0)
	{
		x=n/a;
	}else{
		x=n/a;
		x++;
	}
	if(m%a==0)
	{
		y=m/a;
	}else{
		y=m/a;
		y++;
	}

	printf("%lli",x*y);

	return 0;

}
