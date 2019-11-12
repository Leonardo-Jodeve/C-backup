#include <stdio.h>
int main()
{
	int i=1,middle=0,n;
	printf("«Î ‰»În\n");
	scanf("%d",&n);
	if(n<=0||n>100)
		printf("ERROR,n is illegal\n");
	else
	{
	while(i<=n&&n<=100)
		{
			if(n%i==0)
			{
				middle=middle+1;
				i++;
			}
			else
				i++;
		}
	if(middle%2)
		printf("1\n");
	else
		printf("0\n");
	}
	return 0;
}