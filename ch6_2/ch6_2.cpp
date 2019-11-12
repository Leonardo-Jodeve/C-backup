#include <stdio.h>
int main()
{

	double x;
	double fun(double x);
	printf("Please enter x:");
	scanf("%lf",&x);
	if(x<-1)
		printf("f(x)=%lf\n",fun(x)-1);
	else if(x>=-1&&x<=1)
		printf("f(x)=%lf\n",fun(x));
	else
		printf("f(x)=%lf\n",fun(x)+1);
	return 0;
}

double fun(double x)
{
	double y;
	y=x*x;
	return y;
}