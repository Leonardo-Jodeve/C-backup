#include <stdio.h>
int main()
{
	double i=1,n,sum1=0,sum2=0;
	printf("Please enter n\n");
	scanf("%lf",&n);
	while(i<=n)
		if((int)i%2)
			{sum1=sum1+i;
			i=i+1;}
		else
			{sum2=sum2+i;
			i=i+1;}
	printf("奇数项总和为：%.0lf\n",sum1);
	printf("偶数项总和为：%.0lf\n",sum2);
	return 0;
}