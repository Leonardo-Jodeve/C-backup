#include <stdio.h>
#include <math.h>
int main()
{
	int x;
	int prime_or_not(int x);
	printf("������x:");
	scanf("%d",&x);
	while(x<1)
		{
			printf("���ַǷ�������������x:");
			scanf("%d",&x);
		}
	if(x==1)
		printf("1�Ȳ�������Ҳ���Ǻ���\n");
	else
	printf("%d\n",prime_or_not(x));
	return 0;
}

int prime_or_not(int x)
{
	int i;
	double sq=sqrt((double)x);
	for(i=2;i<=sq;i++)
	{
		if(x%i==0)
			return 0;
	}
	return 1;	
}