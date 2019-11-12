#include <stdio.h>
int main()
{
	int a,b,c,i=10;
	for(a=1;a<=9;a++)
		{
			for(b=1;b<=9;b++)
				{
					c=a*b;
					printf("%d*%d=%-2d  ",a,b,c);
					i++;
				}
			
			printf("\n");
		}
	return 0;
}