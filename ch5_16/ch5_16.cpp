#include <stdio.h>
int main()
{
	int n=1,sum=0;
	while(1)
		{
			scanf("%d",&n);
			sum=sum+n;
			if(n==0)
				break;
		}
	printf("×ÜºÍÎª£º%d\n",sum);
	return 0;
}