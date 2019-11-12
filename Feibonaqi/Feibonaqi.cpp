#include <stdio.h>
int main()
{
	int a[40],i;
	for(i=3;i<=43;i++)
		{
			a[1]=1;
			a[2]=1;
			a[i]=a[i-1]+a[i-2];
			printf("%d\n",a[i-1]);
		}
	return 0;
}