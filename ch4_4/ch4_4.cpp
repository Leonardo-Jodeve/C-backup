#include <stdio.h>
int main()
{
	double x;
	printf("Please input x\nx=");
	scanf("%lf",&x);
	if(x<-1)
		printf("f(x)=%lf\n",x*x-1);
	if(x>1)
		printf("f(x)=%lf\n",x*x+1);
	if(x<=1&&x>=-1)
		printf("f(x)=%lf\n",x*x);
	return 0;
}