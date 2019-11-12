#include <stdio.h>
int main()
{
	int n;
	long sum(int n);
	printf("Please enter n:");
	scanf("%d",&n);
	printf("sum=%d\n",sum(n));
	return 0;
}

long sum(int n)
{
	long sum;
	sum=(n+1)*n/2;
	return sum;
}