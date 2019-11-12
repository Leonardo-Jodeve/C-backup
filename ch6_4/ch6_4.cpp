#include <stdio.h>
int main()
{
	int x,y;
	int fib(int x);	
	printf("Please enter n:");
	scanf("%d",&x);
	y=fib(x);
	printf("fib(n)=%d\n",y);
	return 0;
}

int fib(int x)
{
	int i,a=1,b=1,c,d;
	if(x==1||x==2)
		return 1;
	else
		{
			for(i=3;i<=x;i++)
				{
					d=a+b;
					c=d;
					a=b;
					b=c;
				}
				
		}
	return d;
}