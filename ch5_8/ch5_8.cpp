#include <stdio.h>
int main()
{
	int n,sgn=1;
	double sum=0,middle,i=1;
	printf("Please enter n\n");
	scanf("%d",&n);
	while(i<=100)
		{
			middle=sgn*n/i;
			i++;
			sgn=-1*sgn;
			sum=sum+middle;
		}
	printf("sum=%lf\n",sum);
	return 0;
}