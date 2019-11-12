#include <stdio.h>
int main()
{
	int n,x;
	double f;
	printf("p(n,x) Input n,x:");
	do
	scanf("%d%d",&n,&x);
	while(n<0);
	double p(int n,int x);
	f=p(n,x);
	printf("p(%d,%d)=%d",n,x,f);
	return 0;
}

double p(int n,int x)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return (double)((2*n-1)*p(n-1,x)*x-(n-1)*p(n-2,x))/((double)n);
}
