#include <stdio.h>
int main()
{
	int n,i=1;
	double sum=0,middle=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			middle=middle+i;
			sum=sum+middle;			
		}
	printf("s=%.0lf\n",sum);
	return 0;
}