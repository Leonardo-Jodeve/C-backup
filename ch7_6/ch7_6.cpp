#include <stdio.h>
int main()
{
	int a[256]={0},i,j,x=0,square,square2,anti=0;
	for(i=1;i<=256;i++)
		{
			anti=0;
			square=i*i;
			for(square2=square;square2>0;)
				{
					anti=anti*10+square2%10;
					square2=square2/10;			
				}
			if(anti==square)
				{
					a[x]=i;
					x++;
				}
		}
	for(j=0;j<=x-1;j++)
		{
			printf("第%d个回文数=%d\n",j+1,a[j]);
		}
	return 0;
}